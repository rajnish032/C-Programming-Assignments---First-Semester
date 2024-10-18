#include <stdio.h>
int main()
{
    int n;
    printf("enter marks : ");
    scanf("%d", &n);
    if (n >= 90)
        printf(" a+ ");
    else if (n >= 80)
        printf(" a ");
    else if (n >= 70)
        printf(" b+ ");
    else if (n >= 60)
        printf(" b ");
    else if (n >= 50)
        printf(" c+ ");
    else if (n >= 40)
        printf(" c ");
    else
        printf("fail");
    return 0;
}
