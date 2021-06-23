#include <stdio.h>

int soma (int x, int y){
	return x + y;
}

int main(void){
	
	int num1, num2;
	int (*p)(int, int); //ponteiro para função
	
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite um número: ");
	scanf("%d", &num2);
	
	p = soma;
	
	printf("%d", p(num1, num2));
	
}
