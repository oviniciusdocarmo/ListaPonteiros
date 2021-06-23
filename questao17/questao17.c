
#include <stdio.h>   
#include <stdlib.h>     


void somarVetores (int a[], int b[], int c[], int n){
	
	int i;
	
	for(i=0; i<n; i++){
		c[i] = a[i] + b[i];
	}
	
	for(i=0; i<n; i++){
		printf("%i ", c[i]);
	}
	
   
}

int main (void){
	
	int n, i, j;
	float aux;
	
	printf("Digite a quatidade de numeros (n): \n");
	scanf("%i", &n);
	int a[n], b[n], c[n];
	
	for(i=0;i<n; i++){ 
	
		printf("Digite a posicao %i do vetor a: ", i);
		scanf("%i", &a[i]);
		printf("Digite a posicao %i do vetor b: ", i);
		scanf("%i", &b[i]);
		
	}
	
	somarVetores(a,b,c,n);
	
	
}

