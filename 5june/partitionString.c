/*

Author : Shivam

Problem :
Input : string ... 

find no of ways string can be partitioned into two non empty substring such that  no. of consonents in first part is greater than no. of consonent in second part...
alphabet in lowercase only 

DOC : 5/6/24

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[1000];
    printf("\nEnter the string - "); 
    scanf("%s", &s);

    int n = strlen(s);
    int count = 0;
    int lcon = 0;
    int rcon = 0;
    for(int i=0; i<n-1; i++) {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        lcon++;
        
        if(i==0) {
            int j = 1;
            while(j<n) {
                if(s[j]!='a' && s[j]!='e' && s[j]!='i' && s[j]!='o' && s[j]!='u') 
                    rcon++;
                j++;
            }
        }
        
        else {
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') rcon--;
        }
        printf("\nleft and right is %d %d\n", lcon, rcon);
        if(lcon > rcon) count++;
    }
    
    printf("\ncount of consonent is greater. Count is %d\n\n", count);
    return 0;
}
