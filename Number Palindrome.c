/* Check a Palindrome Number */

int palindrome(int n){
	int x=n, r;
	long j=0;

	while(n>0){
		r= n%10;
		n= n/10;
		j= j*10+r;  /*Stored number recursivly */
	}
	if(j==x) return 1;   /* then compare */
	else return 0;
}
