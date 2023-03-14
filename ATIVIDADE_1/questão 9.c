#include <stdio.h>
int main()
{
	int l, c, i, j;
	scanf("%d%d",&l,&c);
	for(i = 1; i <=l; i++)
	{
		for(j = 1; j <= c; j++)
		{
			if (i == 1 || i == l || j == 1 || j == c ){
				printf("*");
			} else{
				printf(" ");
			}
		}
		printf("\n");
	}
}