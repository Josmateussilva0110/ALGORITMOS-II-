#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Registro
{
    int codigo;
    char nome[20];
    float valor;
}Registro;

void formatacao();
void escrita();
void leitura();
void busca();
int main()
{
    int op;
    while(1)
    {
        printf("=======================================\n");
        printf("sistema de locacao baseada em arquivo\n");
        printf("informe a opcao desejada\n");
        printf("1-formatar\n2-escrever\n3-ler\n4-buscar\n0-finalizar\n: ");
        scanf("%d",&op);
        system("cls");
        if(op == 0)
            break;
        if(op == 1)
            formatacao();
        if(op == 2)
            escrita();
        if(op == 3)
            leitura();
        if(op == 4)
            busca();
        printf("=======================================\n");
    }
}
void formatacao()
{
    Registro vazio = {0, "", 0.0};
    int i;
    FILE *arquivo = fopen("dados.bin", "wb");
    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.\n");
        exit(1);
    }
    else
    {
        printf("arquivo criado com sucesso\n");
        for (i = 0; i < 1000; i++) 
        {
            fwrite(&vazio, sizeof(Registro), 1, arquivo);
        }
        fclose(arquivo);
    }
}
void escrita()
{
    Registro dados;
    int codigo;
    FILE *arquivo = fopen("dados.bin", "rb+");
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    else
    {
        while(1)
        {
            printf("Digite o codigo da locacao (0 para sair): ");
            scanf("%d", &codigo);
            if (codigo == 0)
                break;
            dados.codigo = codigo;
            printf("Digite o nome do veiculo: ");
            fflush(stdin);
            scanf("%[^\n]",dados.nome);
            fflush(stdin);
            printf("Digite o valor da locacao: ");
            scanf("%f", &dados.valor);
            fseek(arquivo, (codigo-1)*sizeof(Registro), SEEK_SET);
            fwrite(&dados, sizeof(Registro), 1, arquivo);
        }
        fclose(arquivo);
    }
}
void leitura()
{
    Registro dados;
    FILE *arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    while (fread(&dados, sizeof(Registro), 1, arquivo) == 1) 
    {
        if (dados.codigo != 0) {
            printf("Codigo: %d\n", dados.codigo);
            printf("veiculo: %s\n", dados.nome);
            printf("Valor: %.2f\n", dados.valor);
            printf("\n");
        }
    }
    fclose(arquivo);
}
void busca()
{
    Registro dados;
    int codigo;
    FILE *arquivo = fopen("dados.bin", "rb");
    if (arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    else
    {
        printf("digite o codigo: ");
        scanf("%d",&codigo);
        while (fread(&dados, sizeof(Registro), 1, arquivo) == 1) 
        {
            if (dados.codigo == codigo) 
            {
                printf("Codigo: %d\n", dados.codigo);
                printf("Cliente: %s\n", dados.nome);
                printf("Valor: %.2f\n", dados.valor);
                printf("\n");
                fclose(arquivo);
                return;
            }
        }
        printf("Nenhum registro encontrado para o codigo %d.\n", codigo);
        fclose(arquivo);
    }
}
