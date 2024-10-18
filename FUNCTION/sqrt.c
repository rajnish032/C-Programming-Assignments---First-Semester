#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("enter a 1st number : ");
    scanf("%d",&a);
    int b;
    printf("enter a 2nd number : ");
    scanf("%d",&b);
    int q = pow(a,b);
    printf("%d",q);
    return 0;
    
}