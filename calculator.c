
/*
 *
 *Author : Shivam
 *Sort an Array 
 *DOC : 23-05-24
 * 
 * */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 1;
	while(a==1) {
	int n1;
	int n2;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&n1, &n2);

	char op;
	printf("\nEnter operator : ");
	scanf(" %c", &op);


	printf("\nResult : ");

	switch(op) {
		case '+' : {
				   printf("%d", n1+n2);
				   break;
			   }
		case '-' : {
				   printf("%d", n1-n2);
				   break;
			   }
		case '*' : {
				   printf("%d", n1*n2);
				   break;
			   }
		case '/' : {
				   if(n2==0) printf("Can't be zero\n");
				   else {

				   	printf("%d", n1/n2);
				   }
				   break;
			   }
		default : {
				  printf("Enter valid operator.\n");
			  }
	}

	printf("\n");
	int k;
	printf("Enter 1 to continue 2 to exit : ");
	scanf("%d\n\n", &k);

	if(k==2) a=2; 
	}

	return 0;
}


