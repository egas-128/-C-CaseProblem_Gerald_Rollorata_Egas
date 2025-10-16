#include <stdio.h>

int main() {
    int grade;
    
    printf("Name : Gerald Rollorata Egas\n");
    printf("ID Number : 2025304607\n");


    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 95 && grade <= 100) {
        printf("Excellent \n");
    } 
    else if (grade >= 85 && grade <= 94) {
        printf("Good  \n");
    } 
    else if (grade >= 75 && grade <= 84) {
        printf("Pass\n");
    } 
    else if (grade >= 0 && grade < 75) {
        printf("Fail\n");
    } 
    else {
        printf("Invalid grade. Please enter a number between 0 and 100.\n");
    }

    return 0;
}