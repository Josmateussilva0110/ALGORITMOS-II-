#include <stdio.h>

void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 );
int main()
{
	float a,b,c,d,*t1,*t2;
	while(1)
	{
		scanf("%f%f%f%f",&a,&b,&c,&d);
		if(a == 0 || b == 0 || c == 0 || d == 0)
			break;
		somaComplexo(a,b,c,d,&t1,&t2);
	}
}
void somaComplexo( float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3 )
{
	*rz3 = rz1 + rz2;
	*iz3 = iz1 + iz2;
	printf("%.1f + %.1fi\n",*rz3,*iz3);
}