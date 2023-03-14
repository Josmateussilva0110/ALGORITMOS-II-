#include <stdio.h>
int main()
{
	int m, n, r, cont = 0;
	scanf("%d%d",&m,&n);
	while(n != 0)
	{
		r = m % n;
		m = n;
		n = r;
		cont += 1;
	}
	printf("resposta = %d\n",m);
	printf("total de repeticao = %d",cont);
}