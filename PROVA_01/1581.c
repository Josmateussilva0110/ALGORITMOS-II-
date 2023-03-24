#include <string.h>
#include <stdio.h>

int main(){
    int N, K, k,i, mesmoIdioma;
    char idioma[21], S[21];
    scanf("%d",&N);
    for(k = 0; k < N; k++){
        scanf("%d",&K);
        mesmoIdioma = 1;
        scanf("%s",&idioma);
        for(i = 1; i < K; i++){
            scanf("%s",&S);
            if(strcmp(idioma, S))  
				mesmoIdioma = 0;
        }
        if(mesmoIdioma) 
			printf("%s\n",idioma);
        else          
			printf("ingles\n");
    }
    return 0;
}
