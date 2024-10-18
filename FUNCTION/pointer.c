#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    //vvip *x = 7;
    printf("%p\n",&a);//%p se address print hota h
    return 0;
}