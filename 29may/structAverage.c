/*

Author : Shivam

Problem : Define a structure to hold student information, including the student ID and a list of scores. Write a program that accepts multiple student records (student_ID and score) and prints the student ID and their highest average score. In case there are multiple records for the same student, the program should calculate the average of their scores. The program should print the student ID with the highest average score.
 
Student with highest marks -> print average score first
 
Sample Input:
S1001-85
S1002-90
S1001-78
S1003-92
S1002-88
S1001-95
S1003-84
S1004-70
S1002-82
S1004-76
 
Sample Output:
S1001-86.00
S1003-88.00
S1002-86.67
S1004-73.00

DOC : 29/5/24

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10000

struct Student {
    int student_id;
    int score;
};

int compareAverage(const void *a, const void *b) {
    struct Student *s1 = (struct Student *)a;
    struct Student *s2 = (struct Student *)b;
    float avg_s1 = (float)s1->score;
    float avg_s2 = (float)s2->score;
    return (avg_s2 - avg_s1);
}

int main() {
    int n;
    printf("Enter number of queries: ");
    scanf("%d", &n);

    struct Student st[n];
    float sum[size] = {0.0}, occ[size] = {0.0};

    for (int i = 0; i < n; i++) {
        printf("S");
        scanf("%d", &st[i].student_id);
        printf("-");
        scanf("%d", &st[i].score);
        sum[st[i].student_id] += st[i].score;
        occ[st[i].student_id]++;
    }

    qsort(st, n, sizeof(struct Student), compareAverage);

    printf("\nStudent records sorted by average score:\n");
    for (int i = 0; i < n; i++) {
        if (occ[st[i].student_id] != -1) {
            printf("S%d-%.2f\n", st[i].student_id, (float)sum[st[i].student_id] / (float)occ[st[i].student_id]);
        occ[st[i].student_id] = -1;
        }
    }

    printf("\n\n");
    return 0;
}

