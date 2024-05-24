

/*

Author : Shivam
Linear Search
DOC : 24/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define size INT_MAX

int main() {
	int n;

	printf("\nEnter size of array : ");
	scanf("%d", &n);

	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]); 
	}	

	int ele;
	printf("\nEnter element to search : ");
	scanf("%d", &ele);
	
	int idx = -1;
	for(int i=0; i<n; i++) {
		if(arr[i] == ele) {
			idx = i;
			break;
		}
	}
	printf("\nElement Index is : %d\n", idx);

	return EXIT_SUCCESS;

}


