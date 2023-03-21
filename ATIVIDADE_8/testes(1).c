#include <stdio.h>
#include <time.h>

int NUM_COMP = 0, NUM_MOV = 0;

typedef struct{
	int chave;
	char nomes[30];
	char endereco[50];
	char telefone[14];
}Alunos;

void gerarDados(Alunos *v, int n, int ordemChave);
void bolha(Alunos *v, int n);
void selecao(Alunos *v, int n);
void insercao(Alunos *v, int n);

int main()
{
	Alunos aluno[10000];
	int tv = 100, c = 0;
	printf("==================================\n");
	printf(">>>>>>> MELHOR CASO <<<<<<<:\n");
	while(c < 10)
	{
		NUM_COMP = 0;
		NUM_MOV = 0;
		gerarDados(aluno, tv, 0);
		printf("vetor de %d:\n",tv);
		printf("\n");
		insercao(aluno, tv);
		printf("\n");
		tv += 100;
		c++;
	}
	printf("==================================\n");
	c = 0;
	tv = 100;
	printf(">>>>>>> PIOR CASO <<<<<<<:\n");
	while(c < 10)
	{
		NUM_COMP = 0;
		NUM_MOV = 0;
		gerarDados(aluno, tv, 2);
		printf("vetor de %d:\n",tv);
		printf("\n");
		insercao(aluno, tv);
		printf("\n");
		tv += 100;
		c++;
	}
	printf("==================================\n");
	c = 0,
	tv = 100;
	printf(">>>>>>>CASO MEDIO <<<<<<<:\n");
	while(c < 10)
	{
		NUM_COMP = 0;
		NUM_MOV = 0;
		gerarDados(aluno, tv, 1);
		printf("vetor de %d:\n",tv);
		printf("\n");
		insercao(aluno, tv);
		printf("\n");
		tv += 100;
		c++;
	}
	printf("==================================\n");
}
void gerarDados(Alunos *v, int n, int ordemChave)
{
	int i, j, c;
	if(ordemChave == 0)
	{
		for(c = 0; c < n; c++)
		{
            v[c].chave = c;
        }
	}
	if(ordemChave == 1)
	{
		srand(time(NULL));
		for(c = 0; c < n; c++)
		{
			 v[c].chave = rand() % 1000;
		}
	}
	if(ordemChave == 2)
	{
		for(c = n-1, j = 0; c >= 0; c--, j++)
		{
			 v[j].chave = c;
		}
	}
}

void bolha(Alunos *v, int n)
{
	int i, j;
	Alunos aux;
	for(i = 0; i < n-1; i++)
	{
		for(j = 1; j < n-i; j++)
		{
			NUM_COMP++;
			if(v[j].chave < v[j-1].chave)
			{
				NUM_MOV+= 3;
				aux = v[j];
				v[j] = v[j-1];
				v[j-1] = aux;
			}
		}
	}
	printf("numero de comparacoes = %d\n",NUM_COMP);
	printf("numero de movimentacao = %d\n",NUM_MOV);
}
void selecao(Alunos *v, int n)
{
	int i, j, min;
	Alunos aux;
	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			NUM_COMP++;
			if(v[j].chave < v[min].chave)
			{
				min = j;
			}
		}
		NUM_MOV+= 3;
		aux = v[i];
		v[i] = v[min];
		v[min] = aux;
	//	NUM_MOV+= 3;
	}
	printf("numero de comparacoes = %d\n",NUM_COMP);
	printf("numero de movimentacao = %d\n",NUM_MOV);
}

void insercao(Alunos *v, int n)
{
	int i, j;
	Alunos aux;
	for(i = 1; i < n; i++)
	{
		NUM_MOV++;
		aux = v[i];
		j = i - 1;
		NUM_COMP++;
		while((j >= 0) && (aux.chave < v[j].chave))
		{
			NUM_MOV++;
			v[j+1]= v[j];
			j--;
		}
		NUM_MOV++;
		v[j+1] = aux;
	}
	printf("numero de comparacoes = %d\n",NUM_COMP);
	printf("numero de movimentacao = %d\n",NUM_MOV);
}
