#include<stdio.h>
#include <limits.h>
#include <float.h>
void main(){

      printf("size of char %%C is %d byte & range is from %d to %d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
      printf("size of unsigned char %%c is %d byte & range is from 0 to %u\n", sizeof(unsigned char), UCHAR_MAX);

      printf("size of short int %%hd is %d byte & range is from %d to %d\n", sizeof(short int), SHRT_MIN, SHRT_MAX );
      int y = USHRT_MAX;
      printf("size of unsigned short int %%hu is %d byte & range is from 0 to %u\n", sizeof(unsigned short int), y);

      printf("size of int %%d is %d byte & range is from %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
      printf("size of unsigned int %%d is %d byte & range is from 0 to %u\n", sizeof(unsigned int), INT_MAX);

      printf("size of long int %%ld is %d byte & range is from %d to %d\n", sizeof(long int), LONG_MIN, LONG_MAX);
      printf("size of unsigned long int %%lu is %d byte & range is from 0 to %u\n", sizeof(unsigned long int), ULONG_MAX);

     printf("-----------------------------------------------------------------\n");
        
      printf("size of float %%f is %d byte & range is from %f to %f\n", sizeof(float), FLT_MIN, FLT_MAX);

      printf("size of double %%f is %d byte & range is from %f to %f\n", sizeof(double), DBL_MIN, DBL_MAX);

       printf("size of long double %%f is %d byte & range is from %f to %f\n", sizeof(long double), LDBL_MIN, LDBL_MAX);





}