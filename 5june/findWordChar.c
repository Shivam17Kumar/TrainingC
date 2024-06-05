/*

Author : Shivam
Problem :
input - string sentence, single char,  a string (1 word).... search char in the string and find the position of first occurance....
res1 = -1 if no char is found

res2 = search substring (word) in sentance ....

print sum of index of both (res1 + res2) 

DOC : 5/6/24

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    char s[1000];
    printf("\nEnter the sentence - ");
    // scanf(s, sizeof(s), stdin);
    scanf("%[^\n]", s);
    int n = strlen(s);
    
    char ch;
    printf("\nEnter character - ");
    scanf(" %c", &ch);
    
    char word[100];
    printf("\nEnter word - ");
    scanf("%s", &word);
    
    int idx1 = -1, idx2 = -1;
    //finding character
    for(int i=0; i<n; i++) {
        if(s[i] == ch) {
            idx1 = i;
            break;
        }
    }
    
    //finding word
    for(int i=0; i<n; i++) {
        if(s[i]==' ') continue;
        char word2[100];
        
        int j = i, id = 0;
        while(j < n && s[j]!=' ') {
            word2[id++] = s[j];
            j++;
        }
        word2[id] = '\0';
        // printf("\nword 2 - %s\n", word2);
        if(strcmp(word, word2)==0) {
            idx2 = i;
            break;
        }
        i = j;
    }
    
    // printf("\nidx1 is - %d\n", idx1);
    // printf("\nidx2 is - %d\n", idx2);
    printf("\nSum of index is - %d\n\n", (idx1+idx2));
    return 0;
}
