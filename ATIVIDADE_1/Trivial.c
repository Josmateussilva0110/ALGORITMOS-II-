#include <stdio.h>
int main()
{
	int m, n, d, cont = 0;
	scanf("%d%d",&m,&n);
	d = n;
	while(m % d != 0 || n % d != 0)
	{
		d--;
		cont += 1;
	}
	printf("resposta = %d\n",d);
	printf("total de repeticao = %d",cont);
}