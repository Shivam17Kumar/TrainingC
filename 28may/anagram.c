/*

Author : Shivam
Check if two strings are anagrams of each other.
-> strings consists of lowercase English letters only.
DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1000

int main() {
    char str[size], str2[size]; 
    printf("\nEnter first string : ");
    scanf("%s", &str);
    printf("Enter second string : ");
    scanf("%s", &str2);
    
    
    int freq[26] = {0};
    int len = strlen(str);
    int len2 = strlen(str2);
    
    for(int i=0; i<len; i++) {
        freq[str[i]-'a']++;
    }
    
    for(int i=0; i<len2; i++) {
        freq[str2[i]-'a']--;
    }
    
    int flag = 0;
    for(int i=0; i<26; i++) {
        if(freq[i]!=0) { 
            printf("\n\nNot Anagram.");
            flag = 1;
            break;
        }
    }
    
    if(flag==0) printf("Anagram");
    printf("\n\n");
    return 0;
}
