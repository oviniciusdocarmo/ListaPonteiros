#include <stdio.h>

int main(void){

	int mat[4], *p, x;
	
	p = mat + 1;
	//p = mat++;		ERRO	
	//p = ++mat;		ERRO
	x = (*mat)++;

}
