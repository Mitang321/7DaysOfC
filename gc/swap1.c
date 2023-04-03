#include<stdio.h>
void main() {

    
int x,y,z;

printf("Enter Value Of X: ");
scanf("%d",&x);

printf("Enter Value Of Y: ");
scanf("%d",&y);
        
z = x;
x = y;
y = z;


printf("After Swap X = %d and Y = %d \n", x, y);


}