/*

Author : Shivam
Remove duplicate characters from a string.
-> string consists of lowercase English letters
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1000

int main() {
    char str[size]; 
    printf("\nEnter a string : ");
    scanf("%s", &str);
    
    int freq[26] = {0};
    int len = strlen(str);
    
    for(int i=0; i<len; i++) {
        freq[str[i]-'a']++;
    }
    
    printf("\nResult is : ");
    for(int i=0; i<len; i++) {
        if(freq[str[i]-'a']>=1) { 
            printf("%c", str[i]);
            freq[str[i]-'a'] = 0;
        }
    }
    printf("\n");
    
    printf("\n\n");
    return 0;
}
