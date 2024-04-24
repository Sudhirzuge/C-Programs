#include<stdio.h>
void main(){
      int a;
    printf("enter a number ");
    scanf("%d", &a);
    if (a<0)
    {
        printf("it's negative number");
    }
    else if (a>0)
    {
        printf("it's positive number");
    }
    else
    {
         printf("you enterd 0");
    }
    
}