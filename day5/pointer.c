#include <stdio.h>

int main(){
    printf("Hello World \n");
    // int a = 56;
    // int* ptra = &a;
    // printf("Value Of A is %d\n", *ptra);
    //     printf("Address Of A is %p\n", &ptra);

int i = 5;
int *ptr = &i;
int **pptr = &ptr;

printf("%d \n", **pptr);

    return 0;
}
