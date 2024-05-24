/*

Author : Shivam
Leaders in Array
DOC : 24/5/24

Problem : Given an array of positive integers. Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.
 
TESTCASE 1:
Input:
6
6 7 4 3 5 2
Output:
2 5 7
 
TESTCASE 2:
Input:
5
2 6 3 8 4
Output:
4 8

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("\nEnter the size : ");
    scanf("%d", &n);
    
    int nums[n];
    printf("\nEnter elements : \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int mx = -1;
    for(int i=n-1; i>=0; i--) {
        if(nums[i] > mx) printf("%d ", nums[i]);
        if(mx < nums[i]) mx = nums[i];
    }
    
    printf("\n");
    return 0;
}

