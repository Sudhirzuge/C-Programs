#include<stdio.h>
void main(){

  // compile this program by assignment_1.c
  // run this program by ./a.exe

    // int     4 byte  %d
    // char    1 byte  %c (0-255) (-128 - 127)
    // float   4 byte  %f
    // double  8 byte  %ld

    // short int 2 byte
    // long int  8 byte

    // unsigned +ve digits  %u
    // signed  -ve digits

  int a = 10;                   
  short int b = 20;
  unsigned short int c = 30;
  long int d = 30;
  unsigned long int e = 40;
  printf("%d %hd %hu %ld %lu\n", a, b, c, d, e);

 printf("%s\n", "------------------------------------------------------");

  printf("sum of a & b is %d\n", a+b);
  printf("difference between a & b is %d\n", a-b);
  printf("product of a & b is %d\n", a*b);

 printf("%s\n", "------------------------------------------------------");

  printf("%d & %d\n",  sizeof(1.2), sizeof(3.6));        // here we get 8 & 8 
  printf("%d & %d\n", sizeof(1.2f), sizeof(3.6));    // here we get 4 &  8 
 
 printf("%s\n", "------------------------------------------------------");

  unsigned char p = -34;
  unsigned int q = -345;

  printf("%d\n", p);
  printf("%c\n", p);

  printf("%u\n", q);
  printf("%c\n", q);

 printf("%s\n", "------------------------------------------------------");

  char ab = 'A';
  printf("%d\n", ab);

 int bc = 70;
 printf("%c\n", bc);



 printf("%s\n", "------------------------------------------------------");

 int xyz = 7;
 for(int f = 1; f<=10; f++){
 int table = xyz*f;
 printf("7*f=%d\n", table);
 }

 printf("%s\n", "------------------------------------------------------");

 

}