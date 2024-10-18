#include<stdio.h>
int main(){
    int n; 
    printf("enter a number : ");
    scanf("%d",&n);
    //5! =1*2*3*4*5  
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("the factroial is : %d\n",product);
    }  
        return 0;
}