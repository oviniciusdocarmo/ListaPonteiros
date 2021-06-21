#include <stdio.h>

int main(void){
  int pulo[5] = {1,2,3,4,5};

	printf("%d\n", *(pulo + 2));
	printf("%d\n", *(pulo + 4));
	printf("%d\n", pulo + 4);
	printf("%d\n", pulo + 2);
  /*
  	RESULTADO:
		3
		5
		6487568
		6487560
	
	RESPOSTA:
		
		A expressão que referencia o valor do vetor pulo é -> *(pulo + 2)
	
  */
}
