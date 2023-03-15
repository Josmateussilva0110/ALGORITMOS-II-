#include <stdio.h>
int main() 
{
    int v[11], i, n, cont=0;
    for(i=0; i<11; i++)
    {
        v[i] = 0;
    }
    while(cont != 11)
    {
        scanf("%d",&n);
        for(i=0; i<11; i++)
        {
            if(n==i)
            {
                v[i]+=1;
            }
        }  
        cont += 1;  
    }
    for(i=0; i<11; i++)
    {
        printf("%d\t%d\n",i,v[i]);
    }
}