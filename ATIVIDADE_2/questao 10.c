#include <stdio.h>
int main()
{
	char oitavas[] = "ABCDEFGHIJKLMNOP";
	char quartas[8], semi[2], final[2], cam[1], equipes, vencedores;
	int jogos, time1,time2, c;
	for(c = 0; c < 8; c++)
	{
		scanf("%d %d", &time1,&time2);
		if (time1 > time2)
			quartas[c] = oitavas[c*2];
		else
			quartas[c] = oitavas[c*2+1];
	}
	for(c = 0; c < 4; c++)
	{
		scanf("%d%d",&time1,&time2);
		if(time1 > time2)
			semi[c] = quartas[c*2];
		else
			semi[c] = quartas[c*2+1];
	}
	for(c = 0; c < 2; c++)
	{
		scanf("%d%d",&time1,&time2);
		if(time1 > time2)
			final[c] = semi[c*2];
		else
			final[c] = semi[c*2+1];
	}
	for(c = 0; c < 1; c++)
	{
		scanf("%d%d",&time1,&time2);
		if(time1 > time2)
			cam[c] = final[c*2];
		else 
			cam[c] = final[c*2+1];
	}
	printf("%c\n",cam[0]);
}