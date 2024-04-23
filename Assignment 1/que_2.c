#include<stdio.h>
int main(){
int a;

printf("enter a number & get it's octal decimal hexadecimal ");
scanf("%d", &a);

printf("user given number in character %c\n", a);
printf("user given number in decimal %d\n", a);
printf("user given number in octal %o\n", a);
printf("user given number in hexadecimal %x\n", a);

    return 0;
}