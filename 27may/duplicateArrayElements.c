/*

Author : Shivam
Find all duplicate elements in the array.
[Array elements must be between 0 <= ele <1000]
DOC : 27/5/24

*/
#include <stdio.h>
#include <stdlib.h>
#define size 1000

int main() {
    int num;
    printf("\nEnter the size of array : ");
    scanf("%d", &num);
    
    int arr[num], freq[size]={0};
    printf("\nEnter elements of array :\n");
    for(int i=0; i<num; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    printf("\n");

    for(int i=0; i<num; i++) {
        if(freq[arr[i]] > 1) {
            freq[arr[i]] = 0;
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n\n");
    return 0;
}
