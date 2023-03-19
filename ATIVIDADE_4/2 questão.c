#include <stdio.h>
#include <math.h>

struct pontos
{
	float x1;
	float x2;
	float y1;
	float y2;
	float w;
};
float distancia(float i1, float f1, float i2, float f2);
int main()
{
	struct pontos t;
	scanf("%f%f%f%f",&t.x1,&t.y1,&t.x2,&t.y2);
	t.w = distancia(t.x1,t.y1,t.x2,t.y2);
	printf("distancia = %.4f\n",t.w);
}

float distancia(float i1, float f1, float i2, float f2)
{
	float s, s2, q, q2, so, r;
	s = i1 - i2;
	s2 = f1 - f2;
	q = s * s;
	q2 = s2 * s2;
	so = q + q2;
	r = sqrt(so);
	return r;
}