#include<stdio.h>

int main(){
	int numeros[10],i,n=2, m=1;	
	for(i=0;i<10;i++){
		scanf("%d",&numeros[i]);	
	}
		printf("elemento\tvalor\t\thistorico\n");
	for(i=0;i<10;i++){
		printf("%d\t\t%d\t\t",i,numeros[i]);
		while(m<=numeros[i]){
		printf("*");
		if(m==numeros[i]){
			printf("\n");
			m=1;
			break;	
		}
		m++;
		}
	}
}