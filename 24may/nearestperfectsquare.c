/*

Author : Shivam
Nearest Perfect square
DOC : 24/5/24

Problem : Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    
    int n1 = sqrt(n);
    int n2 = n1+1;
    
    int s1 = n1*n1;
    int s2 = n2*n2;
    
    printf("\nNearest Square is : ");
    if(n - s1 <= s2 - n) {
        printf("%d", s1);
    } else {
        printf("%d", s2);
    }
    
    printf("\n");
    return 0;
}
