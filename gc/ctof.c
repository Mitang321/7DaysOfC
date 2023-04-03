#include<stdio.h>
void main() {

    
float celsius,faherenheit;
printf("Enter Temperature In Celcius");
scanf("%f", &celsius);


        //Convert
faherenheit = (celsius * 1.8) + 32;

printf("%f Celcius = %f Fahrenheit", celsius, faherenheit);


}