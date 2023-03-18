#include <stdio.h>
#include <math.h>
float distancia(float x1, float y1, float x2, float y2);
int main()
{
	float a1, a2, b1, b2, t;
	scanf("%f%f%f%f",&a1,&b1,&a2,&b2);
	t = distancia(a1,b1,a2,b2);
	printf("distancia = %.4f",t);
}
float distancia(float x1, float y1, float x2, float y2)
{
	float s, s2, q, q2, so, r;
	s = x1 - x2;
	s2 = y1 - y2;
	q = s * s;
	q2 = s2 * s2;
	so = q + q2;
	r = sqrt(so);
	return r;
}