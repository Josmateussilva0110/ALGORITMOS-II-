#include <stdio.h>

int cont = 0;
int ehPrimo(int n);

int main()
{
	int nu, q, c, t;
	scanf("%d",&q);
	for(c = 0; c < q; c++)
	{
		scanf("%d",&nu);
		cont = 0;
		t = ehPrimo(nu);
		if(t == 1)
			printf("%d eh primo\n",nu);
		if(t == 0)
			printf("%d nao eh primo\n",nu);
	}
}
int ehPrimo(int n)
{
	int d, r;
	for(d = 1; d <= n; d++)
	{
		if(n % d == 0)
			cont += 1;
	}
	if(cont == 2)
		r = 1;
	else
		r = 0;
	return r;
}
