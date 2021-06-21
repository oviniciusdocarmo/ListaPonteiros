#include <stdio.h>

int main(void) {
	
	int i=5, j=2, *p, *q;
	
	p = i;	//ERRO
	q = &j;
	p = &*&i;
	i = (*&)j;	//ERRO
	i = *&j;
	i = *&*&j;
	q = *p;		//ERRO
	i = (*p)++ + *q;
			
	
}
