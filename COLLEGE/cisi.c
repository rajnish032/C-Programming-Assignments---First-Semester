#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;

    
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interst : ");
    scanf("%f", &r);
    printf("Enter time period (in years): ");
    scanf("%f", &t);


    si = (p * r * t) / 100;


    ci = p * pow((1 + (r / 100)), t) - p;

    
    printf("Simple Interest (SI) = %f\n", si);
    printf("Compound Interest (CI) = %f\n", ci);

    return 0;
}
