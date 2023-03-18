#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	char arti[][20] = {"o", "um", "algum", "todo", "qualquer"};
	char sub[][20] = {"menino", "homem", "cachorro", "carro", "gato"};
	char ver[][20] = {"passou", "pulou", "correu", "saltos", "andou"};
	char prepo[][20] = {"sobre", "sob", "ante", "ate", "com"};
	int sortear();
	void criar(char fra[]);
	int conc(char fra[], char pala[], int p);
int main()
{
	char fra[100];
	int c = 0;
	srand(time(NULL));
	while(c < 20)
	{
		criar(fra);
		printf("%s\n",fra);
		c++;
	}
}
void criar(char fra[])
{
	int a, s, v, pe, a2, s2, p = 0;
	a = sortear();
	p = conc(fra, arti[a], p);
	s = sortear();
	p = conc(fra, sub[s], p);
	v = sortear();
	p = conc(fra, ver[v], p);
	pe = sortear();
	p = conc(fra, prepo[pe], p);
	a2 = sortear();
	p = conc(fra, arti[a2], p);
	s2 = sortear();
	p = conc(fra, sub[s2], p);
	fra[0] -= 32;
	fra[p -1] = '.';
	fra[p] = '\0';
}
int sortear()
{
	int s;
	s = rand() % 5;
	return s;
}

int conc(char fra[], char pala[], int p)
{
	int c = 0;
	while(pala[c] != '\0')
	{
		fra[p] = pala[c];
		c++;
		p++;
	}
	fra[p] = ' ';
	p++;
	return p;
}