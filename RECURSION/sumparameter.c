#include <stdio.h>
void sum(int n, int s)
{
    if (n == 0)
    {

        printf("%d", s);
        return;
    }
    sum(n - 1, s + n);//1+2+3+4+5+........
    return;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    sum(n, 0);
    return 0;
}