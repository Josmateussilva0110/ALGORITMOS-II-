#include <stdio.h>
int main()
{
	float p, t;
	scanf("%f",&p);
	if (p < 20)
		t = p + (p * 45 / 100);
	else
		t = p + (p * 30 / 100);
	printf("%.2f",t);
}