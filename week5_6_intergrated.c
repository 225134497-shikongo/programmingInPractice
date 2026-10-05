#include <stdio.h>

#define TOTAL_EMPLOYEES 5 // Change to 50 for full lab submission

int main(void) {

 float salaries[TOTAL_EMPLOYEES];

 float sorted[TOTAL_EMPLOYEES];

 float total = 0.0f;

 // 1 & 2. Capture and store
 for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
 printf("Enter salary for employee %d: N$", i + 1);
 scanf("%f", &salaries[i]);
 total += salaries[i];
 sorted[i] = salaries[i];
 }

 // 3. Display
 printf("\nCaptured Salaries:\n");
 for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
 printf("Employee %d: N$%.2f\n", i + 1, salaries[i]);
 }

 // 4 & 5. Total and Average
 printf("\nTotal Expenditure : N$%.2f\n", total);
 printf("Average Salary : N$%.2f\n", total / TOTAL_EMPLOYEES);
 
// 6 & 7. Highest and Lowest
 float highest = salaries[0], lowest = salaries[0];
 for (int i = 1; i < TOTAL_EMPLOYEES; i++) {
 if (salaries[i] > highest) highest = salaries[i];
 if (salaries[i] < lowest) lowest = salaries[i];
 }

 printf("Highest Salary : N$%.2f\n", highest);
 printf("Lowest Salary : N$%.2f\n", lowest);

 // 8. Search
 float target;
 int found = 0;

 printf("\nEnter salary to search: N$");
 scanf("%f", &target);

 for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
 if (salaries[i] == target) {

 printf("Found at Employee %d (Index %d)\n", i + 1, i);
 
found = 1;
 break;
 }
 }
 if (!found) printf("Salary not found.\n");

 // 9 & 10. Bubble Sort and Display
 for (int i = 0; i < TOTAL_EMPLOYEES - 1; i++) {
 for (int j = 0; j < TOTAL_EMPLOYEES - i - 1; j++) {
 if (sorted[j] > sorted[j + 1]) {
 float temp = sorted[j];
 sorted[j] = sorted[j + 1];
 sorted[j + 1] = temp;
 }
 }
 }
 printf("\nSorted Salaries (Lowest to Highest):\n");
 for (int i = 0; i < TOTAL_EMPLOYEES; i++) {
 printf("Rank %d: N$%.2f\n", i + 1, sorted[i]);
 }
 return 0;
}
