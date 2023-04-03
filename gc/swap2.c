#include<stdio.h>
void main() {

    
int x,y;

printf("Enter Value Of X: ");
scanf("%d",&x);

printf("Enter Value Of Y: ");
scanf("%d",&y);
        
x = x + y;
y = x - y;
x = x - y;


printf("After Swap X = %d and Y = %d \n", x, y);


}