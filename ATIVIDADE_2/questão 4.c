#include <stdio.h>
int main()
{
	int n, vet[10], c, j, aux = 1;
	for (c = 0; c < 10; c++)
	{
		scanf("%d",&n);
		if (n >= 10 && n <= 100)
			vet[c] = n;
		for(j = 0; j < c; j++)
		{
			if(vet[c] == vet[j])
			{
				aux = 0;
			}
		}
		if (aux == 1)
			printf("%d\n",vet[c]);
		aux = 1;
	}
}