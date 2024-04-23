#include<stdio.h>
int main(){
 char a;

printf("enter a character & get it's ascii value octal decimal hexadecimal ");
scanf("%c", &a);

printf("ascii value of user enterd character %d\n", a);
printf("user given character value in octal %o\n", a);
printf("user given character value in hexadecimal %x\n", a);

    return 0;

}