#include <stdio.h>
#include <string.h>
void maiuscula(char *sptr);
int main()
{
	char nome[100];
	fgets(nome,30,stdin);
	maiuscula(nome);
	printf("%s\n",nome);
}

void maiuscula(char *sptr)
{
	while(*sptr!='\0')
	{
		if(*sptr >= 'a' && *sptr <= 'z')
		{
			*sptr -= 32;
		}
		*sptr++;
	}
}