#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter 3 numbers to find average ");
    scanf("%d%d%d", &a, &b, &c);
    int add = a+b+c;
    int avg = add/3;
    printf("average of above numbers is %d", avg);
    return 0;
}