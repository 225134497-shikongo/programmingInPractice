#include <stdio.h>

#define NUM_EMPLOYEES 5 // Change to 50 for full lab submission

int main(void) {

 float salary;

 float total = 0.0f;

 float highest = 0.0f;

 float lowest = 0.0f;

 float average;

 printf("===========================================\n");
 printf(" MUNICIPAL EMPLOYEE SALARY ANALYSIS \n");
 printf("===========================================\n\n");

 for (int i = 1; i <= NUM_EMPLOYEES; i++) {

 printf("Enter salary for employee %d: N$", i);
 scanf("%f", &salary);

 total += salary;

 if (i == 1) {

 highest = salary;
 lowest = salary;

 } else {
 if (salary > highest) highest = salary;
 if (salary < lowest) lowest = salary;
 }
 }
 average = total / NUM_EMPLOYEES;

 printf("\n--- SALARY REPORT ---\n");
 printf("Total Salary Expenditure : N$%.2f\n", total);
 printf("Average Employee Salary : N$%.2f\n", average);
 printf("Highest Salary Captured : N$%.2f\n", highest);
 printf("Lowest Salary Captured : N$%.2f\n", lowest);
 return 0;
}