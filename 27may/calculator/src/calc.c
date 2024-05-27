#include <stdio.h>
#include <stdlib.h>
#include <calc_fun.h>

int main() {
	printf("\nEnter two numbers : ");
	int n1, n2 ;
	scanf("%d%d", &n1, &n2);

	printf("\nEnter Operator : ");
	char op;
	scanf(" %ch", &op);

	switch(op) {
		case '+': {
			printf("\nSum is : %d", sum(n1, n2));
			break;
		}
		case '-': {
			printf("\nDifference is : %d", diff(n1, n2));
			break;
		}
		case '*': {
			printf("\nProduct is : %d", mul(n1, n2));
			break;
		}
		default : {
			printf("Enter valid operator.\n");
			break;
		}
	}
	printf("\n\n");
	return EXIT_SUCCESS;
}

