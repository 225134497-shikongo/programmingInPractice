#include <stdio.h>
#include <string.h>

void strip_newline(char *str) {

 str[strcspn(str, "\n")] = '\0';
}
int main(void) {

 char name[100], email[100], phone[30], town[50];

 char backup[100], description[250];

 // Task 1: Basic Input

 printf("Enter supplier name: ");
 fgets(name, sizeof(name), stdin);
 strip_newline(name);

 printf("Enter email: ");
 fgets(email, sizeof(email), stdin);
 strip_newline(email);


 printf("Enter phone: ");
 fgets(phone, sizeof(phone), stdin);
 strip_newline(phone);

 printf("Enter town: ");
 fgets(town, sizeof(town), stdin);
 strip_newline(town);

 printf("\n--- SUPPLIER DETAILS ---\n");
 printf("Name : %s\nEmail: %s\nPhone: %s\nTown : %s\n", name, email, phone, town);

 // Task 2: String Length
 printf("\n--- STRING LENGTHS ---\n");
 printf("Supplier name length: %zu\n", strlen(name));
 printf("Email length : %zu\n", strlen(email));
 printf("Town length : %zu\n", strlen(town));

 // Task 3: Search

 char search_term[100];

 printf("\nEnter supplier name to search: ");
 fgets(search_term, sizeof(search_term), stdin);
 strip_newline(search_term);

 if (strcmp(search_term, "ABC Office Supplies") == 0 || strcmp(search_term, "Namibia
Stationery") == 0) {

 printf("Supplier found.\n");

 } else {

 printf("Supplier not found.\n");
 }
 
// Task 4: Copying
 strcpy(backup, name);
 printf("\nOriginal Name: %s\nBackup Name : %s\n", name, backup);

 // Task 5: Concatenation

 strcpy(description, name);
 strcat(description, " operates in ");
 strcat(description, town);
 strcat(description, ".");

 printf("\nDescription: %s\n", description);

 return 0;
}

