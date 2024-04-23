#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("enter the 3 sides of a traingle");
    scanf("%d%d%d", &a, &b, &c);

    int perimeter = a+b+b+c+c*a;

    int s = perimeter/2;

    int temp = s*(s-a)*(s-b)*(s-c);

    int area = sqrt(temp);
    printf("perimeter & area of traingle is %d %d", perimeter, area );

    return 0;
}