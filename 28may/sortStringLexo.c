/*

Author : Shivam
Sort an array of strings in lexicographic (dictionary) order.
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

int main() {
    int len;
    printf("\nEnter number of strings : ");
    scanf("%d", &len);
    
    char str[len][size];
    printf("Enter strings - \n"); 
    for(int i=0; i<len; i++) {
        scanf("%s", &str[i]);
    }
    
    char temp[size];
    for (int i = 0; i < len; i++) {
        for(int j = i+1; j < len; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    
    printf("\nSorted string is \n");
    for(int i=0; i<len; i++) {
        printf("%s", str[i]);
        printf(" ");
    }
    
    printf("\n\n");
    return 0;
}
