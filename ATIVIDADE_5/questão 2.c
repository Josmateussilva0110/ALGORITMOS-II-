#include <stdio.h>
#include <math.h>
void raizes(float a, float b, float c, float *x1, float *x2);
int main()
{
	float x, y, z, t, r;
	while(1)
	{
		scanf("%f%f%f",&x,&y,&z);
		if(x == 0 || y == 0 || z == 0)
			break;
		raizes(x,y,z,&t,&r);
	}
}

void raizes(float a, float b, float c, float *x1, float *x2)
{
	float delta;
	delta = (b * b) - 4 * a * c;
	 if (a == 0 || delta < 0)
	 {
 		printf("complexo\n");
	 }
	 else
 	{
  	  *x1 = (- b + sqrt(delta))/(2 * a);
  	  *x2 = (- b - sqrt(delta)) /(2 * a);
   	 printf("%.1f %.1f\n",*x1,*x2);
	 }
}