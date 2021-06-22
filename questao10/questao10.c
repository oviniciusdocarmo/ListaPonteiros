#include <stdio.h>

int main(){
	
	char c[4];
	
	printf("char\n");
	printf("%i\n", c+1);
	printf("%i\n", c+2);
	printf("%i\n", c+3);

	int x[4];
	
	printf("int\n");
	printf("%i\n", x+1);
	printf("%i\n", x+2);
	printf("%i\n", x+3);
	
	float f[4];
	
	printf("float\n");
	printf("%i\n", f+1);
	printf("%i\n", f+2);
	printf("%i\n", f+3);
	
	double d[4];
	
	printf("double\n");
	printf("%i\n", d+1);
	printf("%i\n", d+2);
	printf("%i\n", d+3);
	
	/*
	RESULTADO:
	
		char		-> 1 byte
		6487569			4093
		6487570			4094
		6487571			4095
		
		int			-> 2 bytes ----- 4 bytes
		6487556			4094			4096
		6487560			4096			4100
		6487564			4098			4104
		
		float		-> 4 bytes
		6487540			4096
		6487544			4100
		6487548			4104
		
		double		-> 8 bytes
		6487512			4100
		6487520			4108
		6487528			4116
	
	*/
	
}
