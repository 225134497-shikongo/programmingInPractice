#include <stdio.h>
int main()
{
 char municipality[50];
 char mayor[50];
 int population;

 printf("Municipal Financial Management System\n\n");
 printf("***************************************************\n");
 printf("         WELCOME TO WINDHOEK MUNICIPALITY             \n");
 printf("****************************************************\n");

 printf("Enter Municipality Name: ");
 scanf("%49s", municipality);

printf("Enter Mayor: ");
 scanf("%49s", mayor);

 printf("Enter Population: ");
 scanf("%d", &population);

 printf("\n==================================================\n");
 printf("Municipality Name : %s\n", municipality);
 printf("Mayor : %s\n", mayor);
 printf("Population : %d\n", population);
 printf("\n==================================================\n");
 return 0;
}