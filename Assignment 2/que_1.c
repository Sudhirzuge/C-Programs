#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("enter first number ");
       scanf("%d", &a);

    printf("enter a second number ");
       scanf("%d", &b);

       if (b<=0)
       {
        printf("please enter non zero digit can't divide with 0");
       }
 
    c = a/b;
    d = a%b;

    printf(" division of given number is %d & remainder is %d", c, d);

    return 0;
}