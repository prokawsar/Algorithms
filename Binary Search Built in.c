/* bsearch example */

#include <stdio.h>  
#include <stdlib.h>     /* qsort, bsearch, NULL */

int compare(const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int values[] = { 50, 20, 60, 40, 10, 30 };

int main ()
{
  int * pItem;
  int key = 40;
  qsort (values, 6, sizeof (int), compare);
  
  pItem = (int*) bsearch (&key, values, 6, sizeof (int), compare);
  
  if (pItem!=NULL)
    printf ("%d is in the array.\n",*pItem);
  else
    printf ("%d is not in the array.\n",key);
    
  return 0;
}
