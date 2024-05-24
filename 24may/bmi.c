

/*

Author : Shivam
BMI Calculator
DOC : 24-05-24

*/
#include <stdio.h>

int main() {
    float weight;
    float height;
    printf("\nEnter Weight (in kg) : ");
    scanf("%f", &weight);
    printf("Enter Height (in m) : ");
    scanf("%f", &height);

    float bmi = weight/(height * height);

    printf("BMI is : %f\n", bmi);
    if(bmi < 18.5) printf("Underweight\n");
    else if(bmi < 25) printf("Normal weight\n");
    else if(bmi < 30) printf("Overweight\n");
    else printf("Obesity\n");

    return 0;
}
