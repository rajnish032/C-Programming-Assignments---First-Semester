#include <stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
   
    printf("The value of a i %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}
