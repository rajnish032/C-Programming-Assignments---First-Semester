#include<stdio.h>
int main(){
    float c;
    printf("Enter a Temperature in Celcius : ");
    scanf("%f",&c);
    float f = (c*9/5) + 32;
    printf(" temperature in Fahrenheit is %f",f);
    return 0;
}