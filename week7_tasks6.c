#include <stdio.h>
#include <string.h>

void strip_newline(char *str) {

 str[strcspn(str, "\n")] = '\0';
}

int main(void) {

 char name[100] = "", email[100] = "", phone[30] = "", town[50] = "";

 int choice, added = 0;

 do {

 printf("\n================================\n");
 printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
 printf("================================\n");
 printf("1. Add Supplier\n2. Display Supplier\n3. Search Supplier\n4. Show Name Length\n5.
Exit\n");

 printf("Enter choice: ");
 if (scanf("%d", &choice) != 1) {

 while (getchar() != '\n');

 continue;
 }
 while (getchar() != '\n');

 switch (choice) {

 case 1:
 printf("Enter name: "); fgets(name, sizeof(name), stdin); strip_newline(name);
 printf("Enter email: "); fgets(email, sizeof(email), stdin); strip_newline(email);
 printf("Enter phone: "); fgets(phone, sizeof(phone), stdin); strip_newline(phone);
 printf("Enter town: "); fgets(town, sizeof(town), stdin); strip_newline(town);

 added = 1;

 break;

 case 2:
 if (added) printf("Name: %s\nEmail: %s\nPhone: %s\nTown: %s\n", name, email, phone,
town);
 else printf("No supplier recorded.\n");
 break;

 case 3: {
 if (!added) break;
 char search_term[100];
 printf("Enter name to search: "); fgets(search_term, sizeof(search_term), stdin);
strip_newline(search_term);
 if (strcmp(search_term, name) == 0) printf("Supplier found.\n");
 else printf("Supplier not found.\n");
 break;
 }
 case 4:
 if (added) printf("Supplier name length: %zu\n", strlen(name));
 else printf("No supplier recorded.\n");
 break;

 case 5:
 printf("Exiting module.\n");
 break;
 }
 } while (choice != 5);
 return 0;
}

