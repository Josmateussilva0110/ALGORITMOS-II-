#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 2
struct ficha{
char nome[20];
float alt;
float peso;
float ira;
};

int main()
{
	struct ficha mat[t];
	int l;
	int pe, pa, pi;
	float soma = 0,p = 0, i = 0, media, mp,mi, maip = 0, maial = 0, maii = 0;
	for(l = 0; l < t; l++)
	{
		fflush(stdin);
		gets(mat[l].nome);
		fflush(stdin);
		scanf("%f",&mat[l].alt);
		fflush(stdin);
		scanf("%f",&mat[l].peso);
		fflush(stdin);
		scanf("%f",&mat[l].ira);
	}
	for(l = 0; l < t; l++)
	{
		soma += mat[l].alt;
		media = soma / t;
		p += mat[l].peso;
		mp = p / t;
		i += mat[l].ira;
		mi = i / t;
	}
	for(l = 0; l < t; l++)
	{
		if(mat[l].peso > maip)
		{
			maip = mat[l].peso;
			pe = l;
		}
		if(mat[l].alt > maial)
		{
			maial = mat[l].alt;
			pa = l;
		}
		if(mat[l].ira > maii)
		{
			maii = mat[l].ira;
			pi = l;
		}
	}
	printf("media de peso = %.2f\n",mp);
	printf("altura = %.2f\n",media);
	printf("media de ira = %.2f\n",mi);
	printf("\n");
	printf("maior peso: %s (%.2f)\n",mat[pe].nome,maip);
	printf("maior altura: %s (%.2f)\n",mat[pa].nome, maial);
	printf("maior ira: %s (%.2f)\n",mat[pi].nome,maii);
	return 0;
}