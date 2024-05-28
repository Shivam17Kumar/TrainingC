/*

Author : Shivam
Find the Missing Number in an Array
-> array elements between [0...n].
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#define size 1000

int main() {
    int n;
    printf("\nEnter size of Array : ");
    scanf("%d", &n);
    
    int nums[n];
    printf("\nEnter the elements of array : \n");
    
    long long sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    
    printf("\nMissing number is : %d", n*(n+1)/2 - sum);
    printf("\n\n");
    return 0;
}
