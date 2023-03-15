#include <stdio.h>
int main()
{
	char nome[20], c, t, p = 0;
	int vet[20];
	scanf("%s",&nome);
	t = strlen(nome);
	for(c = 0; c < t; c++)
	{
		if(nome[c] == 'r')
		{
			nome[c] = 'l';
			vet[c] = 1;
		}
	}
	printf("Cebolinha falaria: ");
	for(c = 0; c < t; c++)
	{
		printf("%c",nome[c]);
	}
	for (c = 0; c < t; c++)
	{
		if (vet[c] == 1)
			printf("\nposicao %d",c);
	}
}