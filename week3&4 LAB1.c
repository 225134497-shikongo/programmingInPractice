#include <stdio.h>
int main() {

float basic_salary, housing_allowance, transport_allowance, tax;
float gross_salary, net_salary;

printf("Enter Basic salary: ");
scanf("%f", &basic_salary);

printf("Enter Housing Allowance: ");
scanf("%f", &housing_allowance);

printf("Enter Transport_allowance: ");
scanf("%f", &transport_allowance);

printf("Enter Tax amount: ");
scanf("%f", &tax);

gross_salary = basic_salary + housing_allowance + transport_allowance;
net_salary = gross_salary - tax;

printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("\n        SALARY DETAILS            \n");
printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

printf("Gross salary: %.2f\n", gross_salary);
printf("Net salary: %.2f\n", net_salary);
 
return 0;
}