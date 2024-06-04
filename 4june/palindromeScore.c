/*

Author : Shivam
Problem :
Input
 
Input string: You are given a string, str.
 
You need to find the score of str as per the following rules:
1) For each palindrome of length 4 in str, add 5 to the score
2) For each palindrome of length 5 in str, add 10 to the score
 
It is given that palindromes can overlap within str. However, the characters of the palindrome must be continuous and must NOT be circular (i.e. they must NOT wrap around the end of the string.
 
Output the final value of score.
 
Notes:
• A palindrome is a word, phrase, or sequence that reads the same backwards as forwards. Examples of palindromes are words like "madam", "racecar", "abCba" and "aBccBa", and "ABBA"
• Palindromes are case-sensitive in this problem (e.g. "Madam" and "ABCcba" are NOT palindromes)
• The score is initially 0
• There are no whitespaces in str.
DOC : 4/6/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPal(int l, int r, char s[]) {
    int n = r-l+1;
    if(n < 4) return 0;
    
    while(l<r) {
        if(s[l]!=s[r]) return 0;
        l++; r--;
    }
    return n==4 ? 5 : 10;
}

int main() {
    char str[1000];
    
    printf("\nEnter the string : ");
    scanf("%s", &str);
    int n = strlen(str);
    
    int score = 0;
    
    for(int i=0; i<n; i++) {
        for(int j=i; j<i+5; j++) {
            score += isPal(i, j, str);
        }
    }
    
    printf("\nScore is : %d", score);
    printf("\n\n");
    
    return 0;
}
