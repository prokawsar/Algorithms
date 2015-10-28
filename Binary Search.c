/* For BS data need to be Sorted. */
/* scanf("%d", &n);
  int array[n];
*/

int BinSearch(int *array, int number_of_elements, int num) /* n is Number_of_Elements */
{
	int low = 0, high = number_of_elements-1, mid;
        
	while(low <= high){
			
		mid = (low + high)/2;

		if(array[mid] == num){
			return mid; /* returning the index. */
		}
		else if(array[mid] < num){
			low = mid + 1;
		}
		else if(array[mid] > num){
			high = mid-1;
		}
	}
	return 0;
}
