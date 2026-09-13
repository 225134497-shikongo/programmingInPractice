#incude <stdio.h>
int main(){

char name[50];
float price, budget;
int registration, documents;

printf("====== TENDER EVALUATION=====\n");

printf("supplier name: ");
scanf("%49s", name);

printf("Tender price: ");
scanf("%f", &price);

printf("Available Budget: ");
scanf("%f", budget);

printf("Valid Registration (1=yes, 0=No): ");
scanf("%d", &registration);

printf("Documents complete (1=yes, 0=NO):
scanf("%d", &documents);

printf("\n===== RESULT ======\n");
printf("Supplier: %s\n", name);

if(registration == 1 && documents == 1 &&price <= budget){
printf("status: Qualified\n");
}
else{
printf("status: Disqulified\n");
}
return 0;
}


