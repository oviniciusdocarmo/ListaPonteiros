#include <stdio.h>


int main(void) {
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	
	printf("Expressao 1: %d\n", p == &i);  //resposta: 1
	printf("Expressao 2: %d\n", *p - *q);  //resposta: -2
	printf("Expressao 3: %d\n", **&p);  //resposta: 3
	printf("Expressao 4: %d\n", 3 - *p/(*q) + 7);  //resposta: 10
	
}
