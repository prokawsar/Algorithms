/* Method sieve */

#include <stdio.h>
#include <math.h>

#define SIZE 100


int prime[SIZE];

void sieve()
{
	int i, M;
	for(i=0; i<SIZE; i++){
		prime[i]=1;
	}
	for(i=2; i<SIZE; i+=2){
		prime[i]=0;
	}
	for(i=3; i<sqrt(SIZE); i++){

		if(prime[i]){
			for(M=i*i; M<SIZE; M+=i){
				prime[M]=0;
			}
		}
	}
	for(i=3; i<SIZE; i++){
		if(prime[i]){
			printf("%d\n", i);
		}
	}

}

int main()
{
	sieve();

	return 0;
}
