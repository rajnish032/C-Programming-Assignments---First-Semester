#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    //vvip *x = 7;
    int** y =&x;
    int*** z =&y;
    printf("%d\n",a);//%p se address print hota h
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
}