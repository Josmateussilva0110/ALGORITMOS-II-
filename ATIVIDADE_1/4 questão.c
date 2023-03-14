#include <stdio.h>
int main()
{
	float m, t;
	scanf("%f",&m);
	if (m < 12)
		t = m * 1.30;
	else
		t = m * 1.00;
	printf("R$ %.2f",t);
}