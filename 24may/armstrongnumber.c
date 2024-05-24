/*

Author : Shivam
Armstrong Number
DOC : 24/5/24

*/
#include <stdio.h>
#include <stdlib.h>

int power(int a, int b) {
    int res = 1;
    for(int i=0; i<b; i++) {
        res = res*a;
    }
    return res;
}

int main() {
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    
    int sum = 0;
    int digits = 0;
    int n = num;
    
    while(n) {
        digits++;
        n/=10;
    }
    
    n = num;
    while(n) {
        int r = n%10;
        sum += power(r, digits);
        n /= 10;
    }
    
    if(sum == num) {
        printf("\nArmstrong number.\n");
    }
    else {
        printf("\nNot an Armstrong number.\n");
    }
    
    printf("\n");
    return 0;
}
