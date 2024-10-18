#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter a 1st number: ");
    scanf("%d",&a);
    printf("Enter a 2n  number: ");
    scanf("%d",&b);
    printf("Enter a 3rd number: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    return 0;
}