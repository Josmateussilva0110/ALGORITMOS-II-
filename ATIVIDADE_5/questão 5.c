#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct card{
    int face;
    int naipe;
};

typedef struct card Card;

void preenche(Card *wDeck, char *wFace, char *wnaipe);
void embaralha(Card *wDeck);
void imprime(Card *wDeck);

char face[][20]={"As","Dois","Tres","Quatro","Cinco","Seis","Sete","Oito","Nove","Dez","Valete","Dama","Rei"};
char naipe[][20]={"Copas","Ouros","Paus","Espadas"};

int main()
{
   Card baralho[52];
    preenche(baralho, face, naipe);
    embaralha(baralho);
    imprime(baralho);
}

void preenche( Card *wDeck, char *wFace, char *wnaipe){
   int i;
   for(i = 0; i < 52; i++)
   {
        wDeck[i].face = i % 13;
        wDeck[i].naipe = i % 4;
   }
}

void embaralha(Card *wDeck)
{
    int i, j;
    Card t;
    srand(time(NULL));
    for(i = 0; i < 52; i++)
    {
        j = rand() % 12;
        t = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = t;
    }
}

void imprime(Card *wDeck)
{
    int i, fa, na;
    for(i = 0; i < 52; i++)
    {
        fa = wDeck[i].face;
        na = wDeck[i].naipe;
        printf("%s de %s\n",face[fa],naipe[na]); 
    }
}