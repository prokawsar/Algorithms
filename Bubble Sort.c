/* Bubble Sort 
Self Implementation 
*/

#include <stdio.h>

int main(){

	int n, i, num[100];

	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
	}
	for(i=0; i<10; i++){
		for(n=i+1; n<10; n++){
			if(num[i]> num[n]){
				int temp = num[i];
				num[i]= num[n];
				num[n]= temp;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("%d\n", num[i]);
	}

	return 0;
}
