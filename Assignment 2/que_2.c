#include<stdio.h>
void main(){
    int a;
    printf("enter a number ");
    scanf("%d", &a);
    if (a%2==0)
    {
         printf("enterd number %d is a even number", a);
    }
    else
    {
        printf("enterd number %d is a odd number", a);
    }
    
}