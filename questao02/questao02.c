#include <stdio.h>

int main(void) {
	
	int i=5, *p;
	p = &i;
	printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
	
	//RESULTADO: 62fe1c 7 5 15 9
	//RESPOSTA: caso a variavel i estivesse no endereço 4094 -> ffe 7 5 15 9

}
