#include <stdio.h>

void increasing_decreasing(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        increasing_decreasing(n - 1);
        printf("%d\n", n);
    }
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        increasing_decreasing(n);
    }

    return 0;
}
