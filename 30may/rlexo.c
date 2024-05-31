/*
 * Author: Shivam
 * Program: given string choose lexicographically consecastive charater and delete both. delete onely one pair at time
 
 Ex - acdbfz
output - abfz
 * Date: 31-05-2024
 * */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[1024];
	printf("Enter String : ");
	scanf("%s",str);
	
	int n = strlen(str);
    int i = 0;
    
    while(i < n){
        // if(i == n-1) break;
        if(str[i]+1 == str[i+1] && str[i] != 0) {
            str[i] = 0;
            str[i+1] = 0;
            i = 0;
        }
        else if(str[i] != 0 && str[i+1] == 0) {
            int j = i+1;
            while(j < n && str[j] == 0) {
                j++;
            }
            if(str[i]+1 == str[j]) {
                str[i] = 0;
                str[j] = 0;
                i = 0;
            }
            else i++;
        }
        else {
            i++;
        }
    }
    for(int i = 0; i < n; i++){
        if(str[i] != 0){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
