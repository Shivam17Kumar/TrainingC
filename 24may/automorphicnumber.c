/*

Author : Shivam
Automorphic Number
DOC : 24/5/24

*/
#include <stdio.h>

int main() {
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    
    long long sq = num*num;
    int ans = 1;
    while(num) {
        int r = num % 10;
        int r2 = sq % 10;
        num/=10;
        sq/=10;
        
        if(r!=r2) {
            ans = 0;
            break;
        }
    }
    
    if(ans == 1) {
        printf("\nAutomorphic number.\n");
    }
    else {
        printf("\nNot an Automorphic number.\n");
    }
    
    printf("\n");
    return 0;
}

