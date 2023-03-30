#include<stdio.h>
int main() {

    
 int amount, time, rate, SI;

printf("Enter Amoumt: ");
scanf("%d", &amount);


printf("Enter time(in Years): ");
scanf("%d", &time);

printf("Enter Rate: ");
scanf("%d", &rate);

SI = (amount * time * rate) /100;

printf("Simple Interest = %d", SI);

         return 0;

}