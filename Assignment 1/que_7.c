#include<stdio.h>
int main(){
    int num;
    printf("enter a four digit number ");
    scanf("%d", &num);

    int a, b, c, d;

    a = num%10;
    num = num/10;
    b = num%10;
    num = num/10;
    c = num%10;
    num = num/10;
    d = num;
     
    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d\n", a*1000, b*100, c*10, d);
    printf("%d%d%d%d\n", d, c, b, a);
    return 0;
}