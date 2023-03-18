#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void craps();
int somardado();
int somardado2();
void ganhou(int x);
int main()
{
	craps();
}
void craps()
{
	int dado1, dado2, ponto;
	dado1 = somardado();
	ganhou(dado1);
	if(dado1 == 4 || dado1 == 5 || dado1 == 6 || dado1 == 8 || dado1 == 9 || dado1 == 10)
	{
		ponto = dado1;
		printf("ponto e %d\n",ponto);
		while(1)
		{
			dado2 = somardado2();
			if (dado2 == 7)
			{
				printf("jogador perdeu\n");
				break;
			}
			if (dado2 == ponto)
			{
				printf("jogador ganhou\n");
				break;
			}
		}
	}
}
int somardado()
{
	int l1, l2, so;
	srand(time(NULL));
	l1 = rand () % 7;
	l2 = rand () % 7;
	if (l1 == 0)
		l1 = 1;
	if(l2 == 0)
		l2 = 1;
	so = l1 + l2;
	printf("%d + %d = %d\n",l1,l2,so);
	return so;
}
int somardado2()
{
	int la1,la2, so2;
	la1 = rand () % 7;
	la2 = rand () % 7;
	if (la1 == 0)
		la1 = 1;
	if(la2 == 0)
		la2 = 1;
	so2 = la1 + la2;
	printf("%d + %d = %d\n",la1,la2,so2);
	return so2;
}	
void ganhou(int x)
{
	if(x == 7 || x == 11)
		printf("jogador ganhou\n");
	if (x == 2 || x == 3 || x == 12)
		printf("jogador perdeu\n");
}