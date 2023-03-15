#include <stdio.h>
#define al 2
#define aco 3
#define bl 3
#define bco 2
int main()
{
	int l, c, a[al][aco], b[bl][bco], d[bl][aco];
	int p, r = 0;
	//matriz A preenchimento
	for(l = 0; l < al; l++)
	{
		for(c = 0; c < aco; c++)
		{
			printf("[%d][%d]: ",l,c);
			scanf("%d",&a[l][c]);
		}
	}
	//matriz B preenchimento
	for(l = 0; l < bl; l++)
	{
		for(c = 0; c < bco; c++)
		{
			printf("[%d][%d]: ",l,c);
			scanf("%d",&b[l][c]);
		}
	}
	//imprimindo matriz A
	printf("matriz A\n");
	for(l = 0; l < al; l++)
	{
		for(c = 0; c < aco; c++)
		{
			printf("%3d ",a[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	//imprimindo matriz B
	printf("matriz B\n");
	for(l = 0; l < bl; l++)
	{
		for(c = 0; c < bco; c++)
		{
			printf("%3d ",b[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	// calculos das matrizes 
	for(l = 0; l < al; l++)
	{
		for(c = 0; c < bco; c++)
		{
			d[l][c] = 0;
			for (p = 0; p < bl; p++)
			{
				r += a[l][p] * b[p][c];
			}
			d[l][c] = r;
			r = 0;
		}
	}
	//imprimindo matriz C
	printf("matriz C\n");
	for(l = 0; l < al; l++)
	{
		for(c = 0; c < bco; c++)
		{
			printf("%3d ",d[l][c]);
		}
		printf("\n");
	}
}