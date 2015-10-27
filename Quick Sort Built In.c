#include <stdlib.h>

int values[2000000];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{ 
  int n, i, x;

  while(scanf("%d", &x) && x){
	  for(i=0; i<x; i++){
		scanf("%d", &values[i]);
	  }
	  qsort (values, x, sizeof(int), compare);
	  
	  for (n=0; n<x; n++){
		 printf ("%d ", values[n]);
	  }
  }

  return 0;
}
