#include <stdio.h>
#include <string.h>

#define MAX_SALARIES 5 // Change to 50 for full lab submission
#define MAX_BUDGETS 5 // Change to 10 for full lab submission
#define MAX_VEHICLES 5 // Change to 20 for full lab submission

void strip_newline(char *str) {

 str[strcspn(str, "\n")] = '\0';
}

int main(void) {

 float salaries[MAX_SALARIES];
 float budgets[MAX_BUDGETS];
 char registrations[MAX_VEHICLES][20];

int choice;
 do {
 printf("\n===================================================\n");
 printf(" MUNICIPAL INFORMATION MANAGEMENT SYSTEM \n");
 printf("===================================================\n");
 printf("1. Employee Salaries\n");
 printf("2. Department Budgets\n");
 printf("3. Vehicle Registrations\n");
 printf("4. Exit\n");
 printf("Enter choice: ");

 if (scanf("%d", &choice) != 1) {
 while (getchar() != '\n');
 continue;
}
 switch (choice) {

 case 1: {

 printf("\n--- SECTION A: EMPLOYEE SALARIES ---\n");
 float total = 0.0f;
 for (int i = 0; i < MAX_SALARIES; i++) {
 printf("Enter salary %d: N$", i + 1);
 scanf("%f", &salaries[i]);
 total += salaries[i];
 }
 printf("\nCaptured Salaries:\n");
 for (int i = 0; i < MAX_SALARIES; i++) {
 printf("Employee %d: N$%.2f\n", i + 1, salaries[i]);
}
float highest = salaries[0], lowest = salaries[0];
 for (int i = 1; i < MAX_SALARIES; i++) {
 if (salaries[i] > highest) highest = salaries[i];
 if (salaries[i] < lowest) lowest = salaries[i];
 }
 printf("Average: N$%.2f | Highest: N$%.2f | Lowest: N$%.2f\n", total / MAX_SALARIES,
highest, lowest);
 float target;
 int found = 0;
 printf("Enter salary to search: N$");
 scanf("%f", &target);
 for (int i = 0; i < MAX_SALARIES; i++) {
 if (salaries[i] == target) {
 printf("Found at position %d (Index %d)\n", i + 1, i);
 found = 1;
break;
 }
 }
 if (!found) printf("Salary not found.\n");
 break;
 }
 case 2: {

 printf("\n--- SECTION B: DEPARTMENT BUDGETS ---\n");
 float total_budget = 0.0f;
 for (int i = 0; i < MAX_BUDGETS; i++) {
 printf("Enter budget for Dept %d: N$", i + 1);
 scanf("%f", &budgets[i]);

total_budget += budgets[i];
 }
 printf("\nTotal Budget : N$%.2f\n", total_budget);
 printf("Average Budget : N$%.2f\n", total_budget / MAX_BUDGETS);
 // Bubble Sort
 for (int i = 0; i < MAX_BUDGETS - 1; i++) {
 for (int j = 0; j < MAX_BUDGETS - i - 1; j++) {
 if (budgets[j] > budgets[j + 1]) {
 float temp = budgets[j];
 budgets[j] = budgets[j + 1];
 budgets[j + 1] = temp;
 }
 }
 }
 printf("\nSorted Budgets (Lowest to Highest):\n");

 for (int i = 0; i < MAX_BUDGETS; i++) {

printf("%d. N$%.2f\n", i + 1, budgets[i]);
 }
 break;
 }
 case 3: {
 printf("\n--- SECTION C: VEHICLE REGISTRATIONS ---\n");

 while (getchar() != '\n');

 for (int i = 0; i < MAX_VEHICLES; i++) {

 printf("Enter registration %d: ", i + 1);
 fgets(registrations[i], sizeof(registrations[i]), stdin);
 strip_newline(registrations[i]);
}
 printf("\nRegistered Vehicles:\n");
 for (int i = 0; i < MAX_VEHICLES; i++) {
 printf("%d. %s\n", i + 1, registrations[i]);
 }
 char search_reg[20];
 int found = 0;
 printf("Enter registration to search: ");
 fgets(search_reg, sizeof(search_reg), stdin);
 strip_newline(search_reg);
 for (int i = 0; i < MAX_VEHICLES; i++) {
 if (strcmp(registrations[i], search_reg) == 0) {
 printf("Found at Vehicle %d\n", i + 1);
 found = 1;
break;
 }
 }
 if (!found) printf("Registration not found.\n");
 break;
 }
 case 4:
 printf("Exiting system.\n");
 break;
 }
 } while (choice != 4);
 return 0;
}