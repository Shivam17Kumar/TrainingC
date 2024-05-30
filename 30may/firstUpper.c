/* Answer 1

Author : Shivam
Make first char of each word in line uppercase
DOC : 30/05/24
 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void solve(char* st) {
    int i = 0;
    st[0] = toupper(st[0]);

    while(st[i] != '\0') {
        if(st[i] == ' ') {
            st[i+1] = toupper(st[i + 1]);
        }
        i++;
    }
    
    printf("%s\n", st);
}

int main() {
    char st[100];
    fgets(st, sizeof(st), stdin);

    solve(st);
    return 0;
}
