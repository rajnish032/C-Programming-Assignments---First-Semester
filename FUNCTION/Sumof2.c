#include<stdio.h>
int add(int x , int y){
    return x+y;
}
int main (){
    int a;
    printf("ENTER A 1ST NUMBER : ");
    scanf("%d",&a);
    int b;
    printf("ENTER A 2ND NUMBER : ");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}