/*

Author : Shivam
Problem : Write a C program to remove from last occurrence of a word in given string
	Example
 
Input
 
Input string: I am a programmer. I learn at Codeforwin.
Input word to remove: I
Output
 
String after removing last occurrence of 'I': 
I am a programmer.  learn at Codeforwin
DOC : 4/6/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    
    printf("\nEnter the string : ");
    fgets(str, sizeof(str), stdin);
    
    int n = strlen(str);
    
    char word[100];
    printf("\nInput the word to delete : ");
    scanf("%s", &word);
    int nn = strlen(word);
    word[nn] = '\0';
    
    int idx = -1;
    for(int i=0; i<n; i++) {
        char word2[100];
        int j = 0, k = i;
        
        while(k<n && str[k]!=' ') {
            word2[j++] = str[k];
            k++;
        }
        word2[j++] = '\0';
        
        // printf("%s", word2);
        if(strcmp(word2, word) == 0) idx = i; 
    }
    
    // printf("index is - %d", idx);
    
    char ans[n];
    int k = 0;
    for(int i=0; i<n; i++) {
        if(i == idx) {
            while(i < n && str[i]!=' ') {
                i++;
            }
        }
        else {
            ans[k++] = str[i];
        }
    }
    
    ans[k++] = '\0';
    printf("%s", ans);
    // puts()
    
    return 0;
}
