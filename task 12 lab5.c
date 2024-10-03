#include <stdio.h>

int main() 
{
   
    float attendance, assignment, exam, grade;
    printf("Enter attendance percentage (0 - 100): ");
    scanf("%f", &attendance);
    printf("Enter assignment score (0 - 100): ");
    scanf("%f", &assignment);
    printf("Enter exam score (0 - 100): ");
    scanf("%f", &exam);
    if (attendance >= 70 && attendance<=100)
    {
     grade = (attendance * 0.2) + (assignment * 0.3) + (exam* 0.5);
    } 
    else {
     grade = (attendance * 0.1) + (assignment * 0.2) + (exam * 0.4);
    }
    printf("Final Grade: %.1f\n", grade);
    if (grade >= 90) 
    {
        printf("A grade awesome\n");
    } 
    else if (grade >= 80) {
        printf("B grade great\n");
    } 
    else if (grade >= 70) {
        printf("C grade satisfactory\n");
    } 
    else if (grade >= 60) {
        printf("D grade try harder\n");
    } 
    else {
        printf("F grade you failed\n");
    }

    return 0;
}