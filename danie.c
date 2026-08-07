#include <stdio.h>
int main(){

int num, i, isprime = 1;

for(num = 100; num <=200; num++){
isprime = 1;

for (i=2; i< num; i++){
if(num%i == 0){
isprime = 0;
break;
  }
}
      if (isprime){
         printf(" %d is a prime number\n" , num);
}else{
printf(" %d is not a prime number\n" , num);
  }
}
return 0;
}
