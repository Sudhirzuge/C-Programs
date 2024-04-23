// #include<stdio.h>
// #include<limits.h>
// void main(){
//     /*
    //    - To print % in Terminal use %%
    //    - To print range use Macro in limits.h 
    //   */

    //   // print size & range of datatype

//       printf("size of char %%C is %d & range is from %d to %d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
//       printf("size of unsigned char %%c is %d & range is from %d to %d\n", sizeof(char), 0, UCHAR_MAX);

// }

#include<stdio.h>
int main(){

    // int x;  //declaration
    // int y = 10;   // declaration with initialisation
    // x = 20;          // assignment

     int x = printf("Hello\n");

    //Printf function returns Gives spacese (character) inside " " .
    // printf function consider \n as single character

    int y = printf("x = %d \n",x);
                // "x = 7 \n" = (7 character)
              
    printf("x = %d \n",y);

    int k = printf("num = %d \n",111);
    //             "num = 111 \n" = (9 character but returning 11)
   
    printf("k = %d",k);

    return 0;
}