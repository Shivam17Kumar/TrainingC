/*

Author : Shivam
Sum of Digits
DOC : 24/5/24

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    
    int sum = 0;
    while(num) {
        int rem = num%10;
        sum += rem;
        num/=10;
    }
    printf("\nSum of Digits : %d", sum);
    printf("\n");

    return EXIT_SUCCESS;
}

