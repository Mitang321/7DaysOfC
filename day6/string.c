#include<stdio.h>
void printString(char arr[]);
int main()
{
char str[50];
fgets(str, 50, stdin);
puts(str);
// scanf("%s",name);
printf("Your Full Name Is %s",str);
return 0;

}
void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++ ){
        printf("%c", arr[i]);
    }
    printf("\n");
}
