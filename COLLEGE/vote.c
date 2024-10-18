#include <stdio.h>
int main()
{
    int n;
    printf("enter age : ");
    scanf("%d", &n);  
     if (100>n>=18)
    {
        printf("the person is eligible to vote");
    }
    else
    {
        printf("the person is not eligible to vote");
    }
    
    return 0;
}
