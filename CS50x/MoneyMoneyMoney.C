#include "cs50.h"
#include <stdio.h>

typedef unsigned int uint;

int main(int argc, char const *argv[])
{
	double B,R, result;
	uint N;
	scanf("%lf",&B);
	scanf("%lf",&R);
	scanf("%u",&N);
	R += 1;
	switch(N % 4){
		case 3:
			result = (R*R*R)*B;
			break;
		case 2:
			result = (R*R)*B;
			break;
		case 1:
			result = R*B;
			break;
		default:
			result = B;
			break;
	}
	N -= N % 4;
	R = R*R*R*R;

	while(N > 0){
		result *= R;
		N -= 4;
	}
	printf("%0.2lf",result);
	return 0;
}
