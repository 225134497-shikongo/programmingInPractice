#include <stdio.h>
#include <string.h>

#define MAX 5

void strip_newline(char *str) {
 str[strcspn(str, "\n")] = '\0';
}

int main(void) {
 char names[MAX][100], emails[MAX][100], phones[MAX][30], towns[MAX][50];

 for (int i = 0; i < MAX; i++) {

 printf("\n--- Supplier %d ---\n", i + 1);
 printf("Name : "); fgets(names[i], sizeof(names[i]), stdin); strip_newline(names[i]);
 printf("Email: "); fgets(emails[i], sizeof(emails[i]), stdin); strip_newline(emails[i]);
 printf("Phone: "); fgets(phones[i], sizeof(phones[i]), stdin); strip_newline(phones[i]);
 printf("Town : "); fgets(towns[i], sizeof(towns[i]), stdin); strip_newline(towns[i]);
 }

 char query[100];

 int found = 0;

 printf("\nEnter supplier name to search: ");
 fgets(query, sizeof(query), stdin);
 strip_newline(query);

 for (int i = 0; i < MAX; i++) {

 if (strcmp(names[i], query) == 0) {

 printf("\nSupplier Found at Index %d:\n", i);
 printf("Name : %s\nEmail: %s\nPhone: %s\nTown : %s\n", names[i], emails[i], phones[i],
towns[i]);

 found = 1;

 break;
 }
 }
 if (!found) printf("Supplier not found.\n");

 return 0;
}

