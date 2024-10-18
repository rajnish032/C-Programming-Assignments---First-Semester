#include<stdio.h>
int main(){
    float a;
    printf("Enter a 1st number : ");
    scanf("%f",&a);
    float b;
    printf("Enter a 2nd number : ");
    scanf("%f",&b);
    int  sum = a+b;
    printf("the sum of two number is %d\n",sum);
    int sub = a-b;
    printf("the sub of two number is %d\n",sub);
    int  mul = a*b;
    printf("the mul of two number is %d\n",mul);
    float div = a/b;
    printf("the div of two number is %f\n",div);
    return 0;
}