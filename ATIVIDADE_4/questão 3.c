#include <stdio.h>
#include <time.h>

struct opcao{
	int t;
	int ca;
	int va;
};
char cartas[][20] = {"As", "Dois", "Tres","Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
char naipes[][20] = {"Paus", "Ouros", "Copas", "Espadas"};
void funcao1();
void funcao2();
int main()
{
	struct opcao n;
	int l, c;
	scanf("%d",&n.t);
	if(n.t == 1)
	{
		funcao1();	
	}
	if(n.t == 0)
	{
		funcao2();
	}
}

void funcao1()
{
	int l, c;
	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 13; c++)
		{
			printf("%s de %s\n",cartas[c], naipes[l]);
		}
	}
}

void funcao2()
{
	struct opcao s1, s2;
	int l, c;
	srand(time(NULL));
	for(l = 0; l < 4; l++)
	{
		for(c = 0; c < 13; c++)
		{
			s1.ca = rand() % 13;
			s2.va = rand() % 4;
			printf("%s de %s\n",cartas[s1.ca], naipes[s2.va]);
		}
	}
}