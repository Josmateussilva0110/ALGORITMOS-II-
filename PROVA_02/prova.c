#include <stdio.h>
#include <string.h>

typedef struct Farmacia{
    int codigo;
    char descricao[30];
    int quantidade;
}Farmacia;

void formatacao();
void cadastrar();
void visualizar();
void remover();
void buscar();
int main()
{
    int op;
    formatacao();
    printf("1-cadastrar\n2-visualizar\n3-remover\n4-buscar\n5-finalizar\n");
    while(1)
    {
        printf("Informe o modulo desejado: ");
        scanf("%d",&op);
        if(op == 1)
            cadastrar();
        if(op == 2)
            visualizar();
        if(op == 3)
            remover();
        if(op == 4)
            buscar();
        if(op == 5)
            break;
    }
}

void formatacao()
{
    Farmacia vazio = {0, "", 0.0};
    int i;
    FILE *arquivo;
    arquivo = fopen("prova.bin", "rb");
    if (arquivo == NULL)
    {
        arquivo = fopen("prova.bin","wb");
        for (i = 0; i < 1000; i++) 
        {
            fwrite(&vazio, sizeof(Farmacia), 1, arquivo);
        }
        fclose(arquivo);
    }
    else
    {
        arquivo = fopen("prova.bin","rb");
        for (i = 0; i < 1000; i++) 
        {
            fwrite(&vazio, sizeof(Farmacia), 1, arquivo);
        }
        fclose(arquivo);
    }
}

void cadastrar()
{
    Farmacia dados;
    int codigo;
    FILE *arquivo = fopen("prova.bin", "rb+");
    if(arquivo == NULL)
    {
        printf("ERRO ao abrir o arquivo\n");
    }
    else
    {
        printf("digite o codigo: ");
        scanf("%d",&codigo);
        fseek(arquivo, (codigo -1)*sizeof(Farmacia), SEEK_SET);
        fread(&dados, sizeof(Farmacia), 1, arquivo);
        if(dados.codigo != 0)
        {
            printf("codigo ja foi cadastrado!!!\n");
            printf("\n");
            fclose(arquivo);
            return;
        }
        dados.codigo = codigo;
        printf("descricao: ");
        fflush(stdin);
        scanf("%[^\n]", dados.descricao);
        fflush(stdin);
        printf("quantidade: ");
        scanf("%d",&dados.quantidade);
        fseek(arquivo, (codigo-1)*sizeof(Farmacia), SEEK_SET);
        fwrite(&dados, sizeof(Farmacia), 1, arquivo);
        fclose(arquivo);
    }
}
void visualizar()
{
    Farmacia dados;
    FILE *arquivo = fopen("prova.bin", "rb");
    if(arquivo == NULL)
    {
        printf("ERRO ao abrir o arquivo\n");
        exit(1);
    }
    printf("\nDADOS CADASTRADOS:\n");
    while(fread(&dados, sizeof(Farmacia), 1, arquivo) == 1)
    {
        if(dados.codigo != 0)
        {
            printf("%d, %s, %d\n",dados.codigo, dados.descricao, dados.quantidade);
            printf("\n");
        }
    }
    fclose(arquivo);
}

void remover()
{
    Farmacia dados = {0, "", 0};
    int codigo;
    FILE *arquivo = fopen("prova.bin","rb+");
    if(arquivo == NULL)
    {
        printf("ERRO ao abrir o arquivo\n");
        printf("\n");
        exit(1);
    }
    else
    {
        printf("informe o codigo para remover: ");
        scanf("%d",&codigo);
        fseek(arquivo, (codigo-1)*sizeof(Farmacia), SEEK_SET);
        fwrite(&dados, sizeof(Farmacia), 1, arquivo);
        printf("cadastro removido\n");
        fclose(arquivo);
    }
}
void buscar()
{
    float limite;
    Farmacia dados;
    int i = 0;
    printf("Digite o limite: ");
    scanf("%f", &limite);

    FILE *arquivo = fopen("prova.bin", "rb");
    if(arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    printf("REGISTROS:\n");
    while(!feof(arquivo))
    {
        fseek(arquivo, i*sizeof(Farmacia), SEEK_SET);
        fread(&dados, sizeof(Farmacia), 1, arquivo);
        if(dados.codigo != 0 && dados.quantidade < limite)
        {
            printf("%d, %s, %d\n",dados.codigo, dados.descricao, dados.quantidade);
            printf("\n");
        }
        i++;
    }
    fclose(arquivo);
}
