#include <stdio.h>


int main(void) {
	float aloha[10], coisas[10][5], *pf, value = 2.2;
	int i=3;
	
	aloha[2] = value;				//V�LIDA
	scanf("%f", &aloha);			//V�LIDA
	aloha = value";			"//INV�LIDA
	printf("%f", aloha);			//V�LIDA
	coisas[4][4] = aloha[3];		//V�LIDA
	coisas[5] = aloha;		//INV�LIDA
	pf = value;				//INV�LIDA
	pf = aloha;						//V�LIDA

}
