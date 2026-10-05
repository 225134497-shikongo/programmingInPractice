#include <stdio.h>

// Function Prototypes
void displayWelcome(void);
void displayMenu(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);

int searchEmployee(int id, int ids[], int size);

int main(void) {

 displayWelcome();

 int choice;
 int employeeIDs[] = {101, 102, 103, 104, 105};

 do {

 displayMenu();
 if (scanf("%d", &choice) != 1) {

 while (getchar() != '\n');

 continue;
 }
 switch (choice) {

 case 1: {
 float basic, housing, transport;
 printf("Enter Basic, Housing, Transport: ");
 scanf("%f %f %f", &basic, &housing, &transport);
 printf("Gross Salary: N$%.2f\n", calculateSalary(basic, housing, transport));
 break;
 }

 case 2: {
 float amount;
 printf("Enter Amount: ");
 scanf("%f", &amount);

 printf("VAT (15%%): N$%.2f\n", calculateVAT(amount));
 break;
 }

 case 3: {
 float revenue, expenses;
 printf("Enter Revenue and Expenses: ");
 scanf("%f %f", &revenue, &expenses);

 printf("Budget Balance: N$%.2f\n", calculateBudget(revenue, expenses));
 break;
 }

 case 4: {
 int id;
 printf("Enter Employee ID: ");
 scanf("%d", &id);
 int pos = searchEmployee(id, employeeIDs, 5);

 if (pos != -1) printf("Employee found at index %d.\n", pos);

 else printf("Employee not found.\n");

 break;
 }

 case 5:
 printf("Exiting Week 8 Function Module.\n");

 break;

 }
 } while (choice != 5);

 return 0;
}

// Function Definitions
void displayWelcome(void) {
 printf("======================================\n");
 printf(" MFMS FUNCTION LIBRARY MODULE \n");
 printf("======================================\n");
}
void displayMenu(void) {
 printf("\n--- MENU ---\n");
 printf("1. Calculate Gross Salary\n");
 printf("2. Calculate VAT\n");
 printf("3. Calculate Budget Surplus/Deficit\n");
 printf("4. Search Employee ID\n");
 printf("5. Exit\n");
 printf("Choice: ");
}
float calculateVAT(float amount) {
 return amount * 0.15f;
}
float calculateSalary(float basic, float housing, float transport) {
 return basic + housing + transport;
}
float calculateBudget(float revenue, float expenses) {
 return revenue - expenses;
}
int searchEmployee(int id, int ids[], int size) {
 for (int i = 0; i < size; i++) {
 if (ids[i] == id) return i;
 }
 return -1;
}
