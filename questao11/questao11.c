#include <stdio.h>


int main(void) {
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	
	aloha[2] = value;				//VÁLIDA
	scanf("%f", &aloha);			//VÁLIDA
	aloha = value";			"//INVÁLIDA
	printf("%f", aloha);			//VÁLIDA
	coisas[4][4] = aloha[3];		//VÁLIDA
	coisas[5] = aloha;		//INVÁLIDA
	pf = value;				//INVÁLIDA
	pf = aloha;						//VÁLIDA

}
