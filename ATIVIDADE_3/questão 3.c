#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int lancarmoeda();
int main()
{
	int y;
	y = lancarmoeda();
	printf("cara = %d vezes\n",y);
}

int lancarmoeda()
{
	int t, r = 1,cont = 0;
	srand(time(NULL));
	while(r <= 100)
	{
		t = rand() % 2;
		if(t == 0)
		{
			printf("coroa\n");
		}
		if(t == 1)
		{
			printf("cara\n");
			cont += 1;
		}
		r++;
	}
	return cont;
}