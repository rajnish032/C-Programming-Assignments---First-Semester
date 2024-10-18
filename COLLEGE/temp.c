#include<stdio.h>
int main(){
    float f;
    printf("Enter a Temperature in Fahrenheit : ");
    scanf("%f",&f);
    float c = ((f-32)*5/9);
    printf(" temperature in celcius is %f",c);
    return 0;
}