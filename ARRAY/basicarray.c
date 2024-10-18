#include <stdio.h>

// Function to find GCD of two numbers
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main() {
    int num1, num2, gcd;

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to find GCD
    gcd = findGCD(num1, num2);

    // Output the GCD
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
