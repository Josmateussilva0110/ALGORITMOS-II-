#include <stdio.h>
int main()
{
	int x, y, c, s, m;
	scanf("%d%d",&x,&y);
	if (x < y -2)
	{
		s = 0;
		m = 1;
		for(c = x; c <= y; c++)
		{
			if(c % 2 == 0)
				s += c;
			else
				m *= c;
		}
	}
	printf("%d\n",s);
	printf("%d",m);
}