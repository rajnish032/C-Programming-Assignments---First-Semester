#include<stdio.h>
int main(){
    int n; 
    printf("enter a number : ");
    scanf("%d",&n);
    //1-2+3-4+5-6+ .... n terms
    //oddd numbers -> add
    //even number ->subtract
    int sum = 0;
    if(n%2==0){
        sum = -n/2;
    }
    else{
        sum = -n/2 + n;
    }
    printf("the sum is : %d",sum);
    return 0;
}