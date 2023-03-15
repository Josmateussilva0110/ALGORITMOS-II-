#include <stdio.h>
int main()
{
	int c, vet[20], j;
	for(c = 2; c <= 20; c+=2)
	{
			vet[c] = c;
	}
	printf("ELEMENTO\tVALOR\n");
	for(c= 2, j = 0;  c <= 20; c+=2, j++)
	{
		printf("%d\t\t%d\n",j, vet[c]);
	}
}