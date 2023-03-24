#include <stdio.h>

double calculaArea(char operacao, double M[][12]);

int main()
{
	int i, j;
	double mat[12][12], t;
	char op;
	scanf("%c",&op);
	for(i = 0; i <= 11; i++)
	{
		for(j = 0; j <= 11; j++)
		{
			scanf("%lf",&mat[i][j]);
		}
	}
	t = calculaArea(op, mat);
	printf("%.1f\n",t);
}
double calculaArea(char operacao, double M[][12])
{
	int x, y, b = 6, f = 5;
	double s = 0.0;
	for(x = 7; x <= 11; x++)
	{
		for(y = f; y <= b; y++)
		{
			s += M[x][y];
		}
		b++;
		f--;
	}
	if(operacao == 'S')
	{
		//printf("%.1lf\n",s);
		return s;
	}
	if(operacao == 'M')
	{
		s /= 30.0;
	//	printf("%.1lf\n",s);
	return s;
	}
}
