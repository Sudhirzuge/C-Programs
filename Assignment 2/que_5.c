#include<stdio.h>
void main(){
     int a, b, c;
    printf("enter first number ");
       scanf("%d", &a);

    printf("enter a second number ");
       scanf("%d", &b);

    printf("enter a third number ");
       scanf("%d", &c);

       if (a>b&&a>c)
       {
        printf(" %d is a max number", a);
       }
       else if(b>c)
       {
        printf(" %d is a max number", b);
       }
       else
       {
        printf(" %d is a max number", c);
       }

       // conditional operator

       (a>b&&a>c)?(printf("%d is a max number", a)):((b>c)?( printf(" %d is a max number", b)):( printf(" %d is a max number", c)));
}