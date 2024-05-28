/*

Author : Shivam
Merge two sorted arrays into a single sorted array.
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#define size 1001

int main() {
    int n1, n2;
    printf("\nEnter size of array 1 : \n");
    scanf("%d", &n1);
    
    printf("Enter size of array 2 : \n");
    scanf("%d", &n2);
    
    int arr1[n1], arr2[n2];
    printf("Enter elements of array 1 -\n");
    for(int i=0; i<n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2 -\n");
    for(int i=0; i<n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int res[n1+n2];    
    int i = 0; 
    int j = 0;
    int k = 0;
    
    while(i < n1 && j < n2) {
        // if(arr1[i] <= arr2[j]) {
        //     res[k] = arr1[i++];
        // } else {
        //     res[k] = arr2[j++];
        // }
        // k++;
        res[k++] = (arr1[i] <= arr2[j]) ? arr1[i++] : arr2[j++];
    }
    
    while(i < n1) { res[k++] = arr1[i++]; }
    while(j < n2) { res[k++] = arr2[j++]; }
    
    printf("\nMerged array is : ");
    for(int i=0; i<n1+n2; i++) {
        printf("%d ", res[i]);
    }
    
    printf("\n\n");
    return 0;
}
