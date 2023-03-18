#include <stdio.h>
#include <stdlib.h>
int advinha();
int main()
{
	int t;
	printf("eu tenho um numero entre 1 e 1000\n");
	printf("voce pode advinhar meu numero?\n");
	t = advinha();
	printf("numero de tentativas = %d",t);
}

int advinha()
{
	int nu,op, cont = 0;
	srand(time(NULL));
	nu = rand () % 1001;
	while(1)
	{
		printf("digite seu palpite>> ");
		scanf("%d",&op);
		cont += 1;
		if(op == nu)
		{
			printf("exelente!, voce acertou :)\n");
			break;
		}
		if(op < nu)
			printf("muito baixo!, tente novamente\n");
		if(op > nu)
			printf("muito alto, tente novamente\n");
	}
	return cont;
}