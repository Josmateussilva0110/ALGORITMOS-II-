#include <stdio.h>
int main()
{
	float s, t, r;
	scanf("%f",&s);
	if (s <= 600)
	{
		t = s;
		r = 00.00;
	}
		
	if (s > 600 && s <= 1200.00)
	{
		t = s - (s * 20 / 100);
		r = s - t;
	}
	if (s > 1200.00 && s <= 2000.00)
	{
		t = s - (s * 25 / 100);
		r = s - t;
	}
	if (s > 2000.00)
	{
		t = s - (s * 30 / 100);
		r = s - t;
	}
	printf("%.2f\n%.2f\n",r,t);
}