/*

Author : Shivam
Reverse the order of words in a given string.
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100

void reverse(char str[], int len) {
    for(int i=0; i<len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}

int main() {
    char str[size];
    printf("\nEnter string - "); 
    scanf("%[^\n]s", str);
    
    int len = strlen(str);
    reverse(str, len);
    
    int i = 0;
    printf("\nReversed string is - ");
    while(i < len) {
        char temp[size] = {};
        int k = 0;
        while(str[i]!=' ' && i < len) {
            temp[k++] = str[i++];
        }
        reverse(temp, strlen(temp));
        printf("%s ", temp);
        i++;
    }
    
    printf("\n\n");
    return 0;
}
