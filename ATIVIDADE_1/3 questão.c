#include <stdio.h>
int main()
{
	char d;
	int p;
	scanf("%c",&d);
	scanf("%d",&p);
	if (p == 0)
	{
		if (d == 'a')
			printf("R$ 500.00");
		else if (d == 'b')
			printf("R$ 350.00");
		else if (d == 'c')
			printf("R$ 350.00");
		else if (d == 'd')
			printf("R$ 300.00");
	}
	if (p == 1)
	{
		if (d == 'a')
			printf("R$ 900.00");
		else if (d == 'b')
			printf("R$ 650.00");
		else if (d == 'c')
			printf("R$ 600.00");
		else if (d == 'd')
			printf("R$ 550.00");
	}
}