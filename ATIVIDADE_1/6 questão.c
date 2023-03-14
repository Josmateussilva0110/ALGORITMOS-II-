#include <stdio.h>
int main()
{
	int n, s = 0;
	while(1)
	{
		scanf("%d",&n);
		if (n < 0)
			break;
		s += n;
	}
	printf("%d",s);	
}