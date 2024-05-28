/*

Author : Shivam

Problem : Define a structure to hold the product sales information, structure will contain the product_ID and total_sales_amount. Write a program that accepts multiple product records (product_ID and total_sales_amount) and prints them in decreasing order of total_sales_amount. In case there are multiple records pertaining to the same product_id, the program should choose a single record containing the highest total_sales_amount.
The program should be capable of accepting a multi-line input. 
Each subsequent line of input will contain a Product record, that is, a product_ID and total_sales_amount(separated by a hyphen). The output should consist of the combination of product_ID and corresponding total_sales_amount in decreasing order of score.
 
Sample Input:
 
P1001-200
P1002-150
P1003-300
P1001-100
P1002-200
P1003-50
P1001-50
P1002-250
 
Sample Output:
 
P1003-300
P1002-250
P1001-200

DOC : 28/5/24

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10000

struct Product {
    int prod_id;
    int amount;
};

int compareInt(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    printf("\nEnter number of queries - "); 
    scanf("%d", &n);
    
    struct Product pt[n];
    int amt[size] = {0};
    
    for(int i=0; i<n; i++) {
        printf("P");
        scanf("%d", &pt[i].prod_id);
        printf("-");
        scanf("%d", &pt[i].amount);
        if(amt[pt[i].prod_id] < pt[i].amount) {
            amt[pt[i].prod_id] = pt[i].amount;
        }
    }
    
    qsort(pt, n, sizeof(struct Product), compareInt);

    printf("\nSorted product records:\n");
    for (int i = 0; i < n; i++) {
        if(amt[pt[i].prod_id] != -1)
        printf("P%d-%d\n", pt[i].prod_id, amt[pt[i].prod_id]);
        amt[pt[i].prod_id] = -1;
    }

    printf("\n\n");
    return 0;
}
