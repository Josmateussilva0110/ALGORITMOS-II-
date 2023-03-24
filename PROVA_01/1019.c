#include <stdio.h>

typedef struct{
	int horas;
	int minutos;
	int segundos;
}Tempo;

Tempo seg2tadTempo( int seg );

int main()
{
    int segundos;
    Tempo t;
    scanf("%d",&segundos);
	seg2tadTempo(segundos);
    return 0;
}
Tempo seg2tadTempo(int seg)
{
	Tempo r;
	r.segundos = seg;
	r.horas = r.segundos / 3600;
	r.segundos %= 3600;
	r.minutos = r.segundos / 60;
	r.segundos %= 60;
	printf("%d:%d:%d\n",r.horas,r.minutos,r.segundos);
}

