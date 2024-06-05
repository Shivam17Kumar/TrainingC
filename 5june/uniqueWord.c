/*

Author : Shivam

Problem :
Input : sentance 
find and print only unique words and anagram will also consiered as anagrams...

Example Input : one two wot one four 
Output : four

DOC : 5/6/24

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solve(char s[], char s2[]) {
    int n = strlen(s), m = strlen(s2);
    if(n!=m) return 0;
    
    int f1[26] = {0};
    
    for(int i=0; i<n; i++) f1[s[i]-'a']++;
    for(int i=0; i<m; i++) f1[s2[i]-'a']--;
    
    for(int i=0; i<26; i++) if(f1[i]!=0) return 0;
    return 1;
}

int main() {
    
    // printf("\nEnter the words of sentence - "); 
    
    // int n = strlen(s);
    int n;
    printf("\nEnter number of words - ");
    scanf("%d", &n);
    
    char s[n][100];
    for(int i=0; i<n; i++) {
        scanf("%s", &s[i]);
    }
    
    printf("\n\n");
    for(int i=0; i<n; i++) {
        int prt = 1;
        for(int j=0; j<n; j++) {
            if(i!=j && solve(s[i], s[j])==1) {
                prt = 0;
                break;
            }
        }
        if(prt==1) printf("%s ", s[i]);
    }
    printf("\n\n");
    return 0;
}
