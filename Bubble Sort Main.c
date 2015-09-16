
/* n is number of array */

		for (i=1; i<n; i++){
			for(j=0; j<n-1; j++){

				if(input[j]>input[j+1]){
					int temp= input[j];
					input[j]= input[j+1];
					input[j+1]= temp;
					x++;
				}
			}
		}
