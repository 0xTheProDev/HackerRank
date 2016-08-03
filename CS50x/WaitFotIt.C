#include <stdio.h>

typedef unsigned int uint;

void calculateWait(int* a, int x, int y, int z, int *wait) {
	int t = 0;
	*wait =  0 ;//a[x] * (x-1);
	for(; t < x; ++t){
		*wait += a[x] - a[t];
	}
	//wait += (a[y] - a[x]) * (y-x);
	for(t = x + 1; t < y; ++t){
		*wait += a[y] - a[t];
	}
	//wait += (a[z] - a[y]) * (z-y);
	for(t = y + 1; t < z; ++t){
		*wait += a[z] - a[t];
	}
}

int main()
{
	uint N;
	int a,b,c, a_, b_, wait , wait_ ; //need to be -1
	scanf("%u",&N);
	int A[N];
	for(a_ = 0; a_ < N ; ++a_){
		scanf("%u", A + a_);
	}

	c =	N - 1;
	a = a_ = 0;
	b = b_ = 1;
	calculateWait(A,a,b,c, &wait);
	// printf("calculateWait %d\n",wait);
	for(a_ = 0; a_ < c; ++a_){
		for(b_ = a_+1; b_ < c; ++b_){
			calculateWait(A,a_,b_,c, &wait_);
			// printf("calculateWait %d",wait_);
			// printf(" | %d, %d, %d ", a_, b_, c);
			if(wait_ < wait){
				// putchar('*');
				wait = wait_;
				a = a_;
				b = b_;
			}
			// putchar('\n');
		}
	}
	// printf("calculateWait %d\n",wait);
	printf("%d\n%d\n%d",A[a],A[b],A[c]);
	return 0;
}
