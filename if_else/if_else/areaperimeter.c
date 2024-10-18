#include<stdio.h>
int main(){
    int l;
    printf("Enter length is :");
    scanf("%d",&l);
    int b;
    printf("enter breath");
    scanf("%d",&b);
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        printf("Area is grater than perimeter");
    }
    else{
        printf("Area is not greater than perimeter");
    }
    return 0;
}