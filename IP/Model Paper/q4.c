//Question 4

#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);

float calcTotSalary(float salary, float increment);

int main(void) {

    int grade;
    float basicSalary, totalSalary, increment;

    printf("Input basic salary : ");
    scanf("%f", &basicSalary);

    printf("Input grade : ");
    scanf("%d", &grade);

    increment = calculateIncrement(grade, basicSalary);
    totalSalary = calcTotSalary(basicSalary, increment);

    printf("Increment : %.2f \n", increment);
    printf("Total Salary : %.2f \n", totalSalary);

    return 0;
}

float calculateIncrement(int grade, float basicSalary){

    float increment;

    switch (grade){
        case 1 : increment = 0.1;
            break;
        case 2 : increment = 0.15;
            break;
        case 3 : increment = 0.2;
            break;
        default: increment = 0;
    }

    return increment;

}

float calcTotSalary(float salary, float increment){

    float totalSalary = salary + salary * increment;

    return totalSalary;

}