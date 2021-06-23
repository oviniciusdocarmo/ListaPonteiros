
#include <stdio.h>   
#include <stdlib.h>     


int compare (const void * a, const void * b) // comparando os valores: a>b ou b>a
{
  return ( *(float*)a - *(float*)b ); // retornando as variaveis comparadas
}

int main (){
	
	int n, i, j;
	float aux,*x;
	
	printf("Digite a quatidade de numeros (n): \n"); // Lendo a quantidade de numeros para o vetor
	scanf("%i", &n);
	x = malloc(n * sizeof(float)); // alocaçao dinamica de memoria
	
	for(i=0;i<n; i++){ // Lendo valores digitados pelo usuario
	
		printf("Digite um numero: ");
		scanf("%f", &x[i]);
		
	}
	
	qsort (x, n, sizeof(float), compare); // qsort: organizando em ordem crescente
	
	
	for (i=0; i<n; i++){ // exibindo o novo vetor
		printf ("%f ",x[i]);
	}
	
	free(x); // liberando memoria
	return 0;
}
