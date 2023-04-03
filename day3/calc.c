#include<stdio.h>
int main()
{
    int a,b,c;
    char sign;
    
    printf("Enter an Sign (+, -, *, /): ");
    scanf("%c", &sign);


    if (sign != '+' && sign != '-' && sign != '*' &&  sign != '/')
{
    printf("Enter a Proper Sign \n"); 
    return 0;
}
   
           
     printf("Enter two numbers separated by space: ");
    
    scanf("%d %d", &a , &b);




    switch (sign)
    {
        case '+': printf("Sum: %d",a+b);
                break;
        
        case '-': printf("Sub: %d", a-b);
        break;

   case '*': printf("Sub: %d", a*b);
        break;

 case '/': printf("Sub: %d", a/b);
        break;

default:
printf("404 Error");
    }


}