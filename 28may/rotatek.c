/*

Author : Shivam 
Rotate an array of n elements to the right by k steps.
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#define size 1000

void rotate(int arr[], int n, int k, int nums[]) { 
    k = k % n;
    int idx = n - k;
    int i = 0;
    while(idx < n) {
        nums[i++] = arr[idx++];
    }
    
    idx = 0;
    while(i < n) {
        nums[i++] = arr[idx++];
    }
    return;
}

int main() {
    int n;
    printf("\nEnter size of array : ");
    scanf("%d", &n);
    
    int k;
    printf("\nEnter the value of k : ");
    scanf("%d", &k);
    
    int arr[n];
    printf("Enter elements of array : \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int nums[n];
    rotate(arr, n, k, nums);
    
    int sz = sizeof(nums)/sizeof(int);
    for(int i=0; i<sz; i++) {
        printf("%d ", nums[i]);
    }
    
    printf("\n\n");
    return 0;
}
