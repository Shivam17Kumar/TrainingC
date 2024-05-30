/*
Author : Shivam
DOC :30/05/24
QUESTION 3
input pipe seperated sequence of words
sort them and print them pipe seperated

input - abc|xhy|mno
output - abc|mno|xhy

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char strs[20][20] = {0};
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", &strs[i]);
    }
    
    printf("\n\n");
    for(int i=0; i<n; i++) {
        if(i==n-1) printf("%s", strs[i]);
        else printf("%s|", strs[i]);
    }
    
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(strs[i], strs[j]) > 0) {
                char temp[20];
                strcpy(temp, strs[i]);
                strcpy(strs[i], strs[j]);
                strcpy(strs[j], temp);
            }
        }
    }
    
    printf("\n\n");
    for(int i=0; i<n; i++) {
        if(i==n-1) printf("%s", strs[i]);
        else printf("%s|", strs[i]);
    }
}
