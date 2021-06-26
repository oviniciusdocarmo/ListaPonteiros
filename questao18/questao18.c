
#include <stdio.h>   
#include <stdlib.h>     


void multiplicacao (int **a, int **b, int **c, int nla, int nca, int ncb){
	
	int linha, coluna, i, acumula=0;
	
	for(linha=0; linha<nla; linha++){
		for(coluna=0; coluna<ncb; coluna++){
			for(i=0; i<nca; i++){
				acumula = acumula + a[linha][i] * b[i][coluna];
			}
			c[linha][coluna] = acumula;
			acumula = 0;
		}	
	}
	
	for(linha=0; linha<nla; linha++){
		for(coluna=0; coluna<ncb; coluna++){
			printf("%d ", c[linha][coluna]);
		}
		printf("\n");
	}
}

int main (void){
	
	
	//--------------------------------------Matriz A
	int nla=2, nca=2, i;
	
	int **x;
	x = malloc(nla * sizeof(int*));
	x[0] = malloc(nla * nca * sizeof(int));
	for(i=1; i<nla; i++){
		x[i] = x[i-1]+nca;
	}
	x[0][0] = 2;
	x[0][1] = 3;
	x[1][0] = 4;
	x[1][1] = 5;
	//---------------------------------------Matriz B
	int ncb=3, nlb=nca;
	
	int **y;
	y = malloc(nlb * sizeof(int*));
	y[0] = malloc(nlb * ncb * sizeof(int));
	for(i=1; i<nlb; i++){
		y[i] = y[i-1]+ncb;
	}
	y[0][0] = 1;
	y[0][1] = 2;
	y[0][2] = 3;
	y[1][0] = 4;
	y[1][1] = 5;
	y[1][2] = 6;
	//---------------------------------------Matriz C
	int ncc=ncb, nlc=nla;
	
	int **z;
	z = malloc(nlc * sizeof(int*));
	z[0] = malloc(nlc * ncc * sizeof(int));
	for(i=1; i<nlc; i++){
		z[i] = z[i-1]+ncc;
	}
	
	multiplicacao(x, y, z, nla, nca, ncb);
	
	free(x[0]);
	free(x);
	free(y[0]);
	free(y);
	free(z[0]);
	free(z);
	
}


