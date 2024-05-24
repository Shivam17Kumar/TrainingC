/*

Author : Shivam
Binary to Decimal
DOC : 23/5/24

*/

#include <stdio.h>
#include <math.h>

int main() {
    char str[100];
    printf("Enter a binary number : ");
    
    scanf("%s", str);
    
    int num = 0;
    int i = 0;
    
    while(str[i] != '\0') {
        num = num*2 + (str[i]-'0');
        i++;
    }
    
    printf("Decimal number is : %d\n", num);
    return 0;
}


