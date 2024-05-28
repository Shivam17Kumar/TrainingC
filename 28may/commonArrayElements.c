/*

Author : Shivam
Find all common elements in two given arrays.
Array elements must be between [0, 1000].
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
    int freq[size] = {0};    
    for(int i=0; i<n1; i++) {
        for(int j=0; j<n2; j++) {
            if(arr1[i] == arr2[j] && freq[arr1[i]]==0) {
                freq[arr1[i]] = 1;
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n\n");
    return 0;
}
