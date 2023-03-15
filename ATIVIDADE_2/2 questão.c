#include <stdio.h>
#include <ctype.h>
int main()
{
	char nome[20];
	int t, c;
	scanf("%s",&nome);
	t = strlen(nome);
	for (c = 0; c < t; c++)
	{
		printf("%c ",toupper(nome[c]));
	}
}