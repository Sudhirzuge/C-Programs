#include<stdio.h>
void main(){
    int a;
    printf("enter a number that you want to print it's table ");
    scanf("%d", &a);
    for(int b=1; b<=10; b++)
    {
           int c = a*b;
          printf(" %d*%d = %d\n", a, b, c);
    }
    
}