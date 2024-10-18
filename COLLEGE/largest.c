#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter a 1st number: ");
    scanf("%d", &a);
    printf("Enter a 2nd  number: ");
    scanf("%d", &b);
    printf("Enter a 3rd number: ");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        printf("%d is largest", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is largest", b);
    }
    else if (c >= a && c >= b)
    {
        printf("%d is largest", c);
    }
    else
        printf("all are same");
    return 0;
}