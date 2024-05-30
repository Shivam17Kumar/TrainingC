// Author : Shivam
// DOC : 30/05/24

// Answer 2
// -> delete adjacent duplicate characters
// input word 

// ex - aacdabef
// cdabef

#include <stdio.h>
#include <string.h>

int main() {
    char st[1000];
    scanf("%s", &st);
    
    int n = strlen(st);
    int i = 0, j = 0;
    
    for(int i=0; i<n; i++) {
        if(st[i]==st[i+1]) i++;
        else {
            if(st[i-1]!=st[i])
            printf("%c", st[i]);
        }
    }
    
    // printf("%s", st);
}


