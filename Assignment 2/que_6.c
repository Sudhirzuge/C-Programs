#include<stdio.h>
void main(){

    int num;
    int a, b, c, d, e;

    printf("enter a five digit number to check it's palindrome or not ");
    scanf("%d", &num);

    a = num%10;
    num = num/10;

    b = num%10;
    num = num/10;

    c = num%10;
    num = num/10;

    d = num%10;
    num = num/10;

    e = num%10;
    
    if (a == e && b == d)
    {
        printf("number is palindrome");
    } else{
         printf("number is not palindrome");
    }
    

}