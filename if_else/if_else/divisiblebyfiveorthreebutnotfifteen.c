#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0) 
    {
        if (n % 15 != 0)
        {
            printf("it is a divisible by 5or3 but not 15");
        }
        else
        {
            printf("the number is divisible by 15");
        }
    }
    else
    {
        printf("it is not divisible by 5r3");
    }

    return 0;
}