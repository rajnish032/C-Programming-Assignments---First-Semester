#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter the 1st number:");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    printf("enter the third number :");
    scanf("%d",&c);
    printf("enter the fourt number:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest integer",a);
    }
    if(b>a && b>c && c>d){
        printf("%d is the greatest number",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is the greatest integer",c);
    }
    if(d>a && d>c && d>b){
        printf("%d is the greatest integer",d);
    }
    return 0;

}