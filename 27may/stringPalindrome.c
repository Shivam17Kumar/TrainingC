/*

Author : Shivam
Check if a string is a palindrome or not
DOC : 27/5/24

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1000

int main() {
    int n1;
    char arr[size];

    printf("\nEnter string :\n");
    scanf("%s", &arr);
    printf("\n");

    n1 = strlen(arr);
    
    int flag = 0;
    for(int i=0; i<n1/2; i++) {
        if(arr[i] != arr[n1-i-1]) {
            printf("Not a Palindrome.\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0) printf("Palindrome\n");
    
    printf("\n\n");
    return EXIT_SUCCESS;
}

