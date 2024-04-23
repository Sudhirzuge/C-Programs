#include<stdio.h>
void main(){
    float celsious;
    printf("enter the temprature to convert from celsious into farherint ");
    scanf("%f", &celsious);
    float x = 9/5;
    float farherint = (x*celsious)+32;
    printf("conversion is %f", farherint);


}