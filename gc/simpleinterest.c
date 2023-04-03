#include<stdio.h>
void main() {

    
 float amount, time, rate, SI;

printf("Enter Amoumt: ");
scanf("%f", &amount);


printf("Enter time(in Years): ");
scanf("%f", &time);

printf("Enter Rate: ");
scanf("%f", &rate);

SI = (amount * time * rate) /100;

printf("Simple Interest = %f", SI);


}