#include <stdio.h>
int inverter(int r);
int main()
{
	int n, y;
	scanf("%d",&n);
	y = inverter(n);
	printf("numero invertido = %d",y);
}
int inverter(int r)
{
	int t = 0;
	while(r > 0)
	{
		t = 10 * t + r % 10;
		r /= 10;
	}
	return t;
}