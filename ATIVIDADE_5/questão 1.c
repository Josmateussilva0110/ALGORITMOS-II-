#include <stdio.h>
void cubo(int *nPtr);
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		cubo(&n);
		printf("%d\n",n);
	}
}
void cubo(int *nPtr)
{
	*nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}