#include <stdio.h>
#include <time.h>
#include <string.h>
typedef struct{
	int codigo;
	char veiculo[20];
}Locacao; 

void inserir(Locacao vet[], int t);
void sequencial(Locacao vet[], int t);
void binaria(Locacao vet[], int t);
void reperticao(Locacao vet[], int codigo, int t);
void remover(Locacao vet[], int t);
int vei(Locacao vet[], char no[], int t);
void ad(Locacao vet[], int t);
int main()
{
	int tam = 1000;
	int codigo;
	char no[20];
	Locacao vet[tam];
	inserir(vet, tam);
	sequencial(vet, tam);
	//ordenar(vet, tam);
	binaria(vet, tam);
	printf("insira o codigo\n");
	scanf("%d",&codigo);
	reperticao(vet, codigo, tam);
	remover(vet, tam);
	printf("insira um nome ");
	scanf("%s",&no);
	if(vei(vet,no,tam) != -1)
	{
		printf("JA existe um modelo com esse nome sua chave eh: %d\n",vei(vet, no, tam));
	}
	else
	{
		printf("Esse modelo ainda nao foi registrada.\n");
	}
	ad(vet, tam);
	
}
void inserir(Locacao vet[], int t)
{
	int i, j;
	char nome[] = "gol";
	srand(time(NULL));
	for(i = 0; i < t; i++)
	{
		vet[i].codigo = rand() % 1001;
		for(j = 0; j < 3; j++)
		{
			vet[i].veiculo[j] = nome[j];
		}
	}
}
void sequencial(Locacao vet[], int t)
{
	int i, j, aux;
	int alea, soma = 0, media;
	srand(time(NULL));
	for(j = 0; j < 100; j++)
	{
		aux = 0;
		alea = rand() % 1001;
		for(i = 0; i < t; i++)
		{
			if(vet[i].codigo == alea)
			{
				aux = 1;
				soma += i;
			}
			if(aux == 1)
				break;	
		}	
	}
	media = soma / 100;
	printf("sequencial: media de registros percorridos por pesquisa eh %d\n",media);
}
void binaria(Locacao vet[], int t)
{
    int p1 = 0, fim, i, aux;
    int alea, j, soma = 0, media;
    srand(time(NULL));
    for(j = 0; j < 100; j++)
    {
		aux = 0;
    	fim = t - 1;
        alea = rand() % 1001;
        while(p1 < fim)
        {
            i = (fim + p1) / 2;
            if(alea < vet[i].codigo)
            {
                fim = i -1;
            }
            else if(alea > vet[i].codigo)
            {
                p1 = i + 1; 
            }
            else
            {
                aux = 1;
				break;
            }
        }
		soma += (i + 1); 
    }
    media = soma / 100;
    printf("binaria: media de registros percorridos por pesquisa eh %d\n", media);
}
	
void reperticao(Locacao vet[], int codigo, int t)
{
	int i, cont = 0;
	for(i = 0; i < t; i++)
	{
		if(vet[i].codigo == codigo)
			cont++;
	}
	printf("o codigo %d repetiu %d vezes\n",codigo, cont);
}
void remover(Locacao vet[], int t)
{
	int cont = 0, valor, i;
	printf("insira um valor ");
	scanf("%d",&valor);
	for(i = 0; i < t; i++)
	{
		if(vet[i].codigo == valor)
		{
			cont++;
			if(cont > 1)
			{
				vet[i].codigo = vet[t -1].codigo;
				t--;
			}
		}
	}
	reperticao(vet, valor, t);
}
int vei(Locacao vet[], char no[], int t)
{
	int i, aux;
	for(i = 0; i < t; i++)
	{
		aux = strcmp(vet[i].veiculo, no);
		if(aux == 0)
			return vet[i].codigo;
	}
	return -1;
}
void ad(Locacao vet[], int t)
{
    int codigo, aux, op;
    char no[20];
    printf("codigo a ser inserido ");
    scanf("%d",&codigo);
    printf("nome a ser inserido ");
    scanf("%s",no);
    aux = vei(vet, no, t);
    if(aux == -1)
    {
        printf("Nao existem registros desse veiculo. Digite 0 para cancelar e 1 para confirmar a insercao: ");
    }
    else
    {
        printf("Existem registros desse veiculo Digite 0 para cancelar e 1 para confirmar a insercao: ");
    }
    scanf("%d",&op);
    if(op == 1)
    {
        t++;
        int i;
        vet[t -1].codigo = codigo;
        for(i = 0; i < 20; i++)
        {
            vet[t-1].veiculo[i] = no[i];
        }
        printf("registro incluido\n");
    }
    else
    {
        printf("registro cancelado\n");
    }
}