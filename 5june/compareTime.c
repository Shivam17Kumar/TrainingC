/*

Author : Shivam

Problem :
input - n (an integer)
next n lines in format hh:mm:ss hh:mm:ss 
ex. 10/02/03 01/02/23  

compare both times & print 
later / equal / early 

DOC : 5/6/24

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n;
    printf("\nEnter number - ");
    scanf("%d", &n);
    
     getchar();
    for(int i=0; i<n; i++) {
    
        char s[1000];
        printf("\nEnter time in 'hh:mm:ss hh:mm:ss' format  - ", i+1); //size 17
        // scanf(s, sizeof(s), stdin);
        scanf("%[^\n]", s);
        
        
        int j = 0;
        while(1) {
            if(s[0] != s[9]) {
                if(s[0] > s[9]) 
                    printf("\nTime 2 is early.\n");
                else 
                    printf("\nTime 1 is early\n");
            }
            else if(s[1] != s[10]) {
                if(s[1] > s[10])
                printf("\nTime 2 is early.\n");
                else 
                printf("\nTime 1 is early\n");
            }
            else if(s[3] != s[12]) {
                if(s[3] > s[12])
                printf("\nTime 2 is early.\n");
                else printf("\nTime 1 is early\n");
            }
            else if(s[4] != s[13]) {
                if(s[4] > s[13])
                printf("\nTime 2 is early.\n");
                else printf("\nTime 1 is early\n");
            }
            else if(s[6] != s[15]) {
                if(s[6] > s[15])
                printf("\nTime 2 is early.\n");
                else printf("\nTime 1 is early\n");
            }
            else if(s[7] != s[16]) {
                if(s[7] > s[16])
                printf("\nTime 2 is early.\n");
                else printf("\nTime 1 is early\n");
            }
            else printf("\nBoth times are equal.\n");
            getchar();
            break;
        }
    }

    printf("\n\n");
    return 0;
}
