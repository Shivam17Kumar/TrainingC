
/*
 *
 *Author : Shivam
 *Sort an Array 
 *DOC : 23-05-24
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

void print(int* nums, int n) {

	printf("\nSorted array is : ");
	for(int i=0; i<n; i++) {
		printf("%d", nums[i]);
		printf(" ");
	}
	printf("\n");
}

int main() {
	int n;
	printf("Enter the size of Array : ");
	scanf("%d",&n);

	int *nums = (int*)malloc(n*sizeof(int));

	printf("Enter n elements :\n");
	for(int i=0; i<n; i++) {
		scanf("%d", &nums[i]);
	}
	
	for(int i=0; i<n; i++) {
	       for(int j=i+1; j<n; j++) {
		       if(nums[i] >= nums[j]) {
			       int t = nums[i];
			       nums[i] = nums[j];
			       nums[j] = t;
		       }
	       }
	}	       

	//printf("I'm working\n");
	//
	print(nums, n);

	return 0;
}

