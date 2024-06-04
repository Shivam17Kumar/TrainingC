/*

Author : Shivam
Problem : Write a C program to replace first occurrence of a character with another character in a string.
Example
 
Input
 
Input string: I love programming.
Input character to replace: .
Input character to replace with: !
 
Output
 
String after replacing '.' with '!': I love programming!
DOC : 4/6/24

*/

#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    
    printf("\nEnter the string : ");
    fgets(str, sizeof(str), stdin);
    
    int n = strlen(str);
    
    char c;
    printf("\nInput character to replace : ");
    scanf("%c", &c);
    
    
    char ch = c;
    printf("\nInput character to replace with : ");
    scanf(" %c", &ch);
    
    for(int i=0; i<n; i++) {
        if(str[i] == c) {
		str[i] = ch;
		break;
	  }
    }
    printf("\n\nOutput string is : %s", str);
    
    return 0;
}
