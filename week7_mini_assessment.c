#include <stdio.h>
#include <string.h>

void strip_newline(char *str) {
 str[strcspn(str, "\n")] = '\0';
}

int main(void) {

 char name[100], email[100], phone[30], town[50];
 char copied_name[100], search_input[100];

 // 1. Accept fields
 printf("Enter Supplier Name: "); fgets(name, sizeof(name), stdin); strip_newline(name);
 printf("Enter Email: "); fgets(email, sizeof(email), stdin); strip_newline(email);
 printf("Enter Phone: "); fgets(phone, sizeof(phone), stdin); strip_newline(phone);
 printf("Enter Town: "); fgets(town, sizeof(town), stdin); strip_newline(town);

 // 2. Display fields
 printf("\n--- SUPPLIER DETAILS ---\n");
 printf("Name : %s\nEmail: %s\nPhone: %s\nTown : %s\n", name, email, phone, town);

 // 3. Display name length
 printf("\nLength of Supplier Name: %zu\n", strlen(name));

 // 4. Copy string
 strcpy(copied_name, name);
 printf("Copied Name: %s\n", copied_name);

 // 5 & 6. Search & Message
 printf("\nEnter name to search: ");
 fgets(search_input, sizeof(search_input), stdin);
 strip_newline(search_input);

 if (strcmp(search_input, name) == 0) {

 printf("SEARCH RESULT: Match found for '%s'.\n", search_input);

 } else {

 printf("SEARCH RESULT: No match found for '%s'.\n", search_input);
 }
 return 0;
}

