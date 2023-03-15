#include <stdio.h>
#define li 5
#define co 3
int main()
{
	char nome[5][20], no[20];
	int l, c, posi, j;
	float mat[li][co], maioral = 0, peso, m = 0, ira = 0;
	float soma = 0, media, menoral, menor, s = 0, me, so = 0, me1, menop, mep, men;
	// preenchimento do vetor de nomes
	for(l = 0; l < li; l++)
	{
		scanf("%s",&nome[l]);
	}
	// preenchimento da matriz com alt, peso, ira
	for(l = 0; l < li; l++)
	{
		for(c = 0; c < co; c++)
		{
			printf("[%d] [%d]: ",l,c);
			scanf("%f",&mat[l][c]);
    		 soma += mat[l][2];
   		  media = soma / li;
   		  if(c == 0)
   		  {
   		 	 s += mat[l][0];
   		 	 me = s / li;
   		  }
   		  if(c == 1)
   		  {
   		  	if(mat[l][1] < mat[1][1])
   		  		mep = mat[l][1];
   		  	else 
   		  		mep = mat[1][1];
   		  	so += mat[l][1];
   		  	me1 = so / li;
   		  }
		}
	} 
	// recebimento dos maiores valores
	for(l = 0; l < li; l++)
	{
		for(c = 0; c < co; c++)
		{
			if (mat[l][0] > maioral)
			{
				maioral = mat[l][0];
				peso = mat[l][1];
				posi = l;
			}
			if(mat[l][0] < mat[0][0])
				menor = mat[l][0];
			else
				menor = mat[0][0];
			if(mat[l][2] < mat[0][2])
				men = mat[l][2];
			else
				men = mat[0][2];
			if(mat[l][1] > m)
				m = mat[l][1];
			if(mat[l][2] > ira)
				ira = mat[l][2];
		}
	}
	printf("maior altura %.2f\n",maioral);
	printf("menor altura %.2f\n",menor);
	printf("media das alturas %.2f\n",me);
	printf("maior peso = %.2f\n",m);
	printf("menor peso = %.2f\n",mep);
	printf("media dos pesos %.2f\n",me1);
	printf("maior ira = %.1f\n",ira);
	printf("menor ira = %.1f\n",men);
	printf("media aritmetica do ira = %.2f\n",media);
	printf("a pessoa mais alta e %s com peso de %.2f\n",nome[posi],peso);
}