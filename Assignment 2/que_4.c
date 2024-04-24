#include<stdio.h>
void main(){

    int a, b;
     printf("enter first number ");
       scanf("%d", &a);

    printf("enter a second number ");
       scanf("%d", &b);

       if (a>b)
       {
        printf(" %d is a max number", a);
       }
       else
       {
        printf(" %d is a max number", b);
       }

       // conditional operator

       (a>b)?(printf("%d is a max number", a)):(printf("%d is a max number", b));
       

}