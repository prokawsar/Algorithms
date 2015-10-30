
/*Generating Fibonacci on  O(n) Complexity */ 
	int i, n[20];
	n[1] = 1;
	n[2] = 2;
	
	for(i=3; i<20; i++){
		n[i] = n[i-1] + n[i-2];
		printf("%d\n", n[i]);
	}
