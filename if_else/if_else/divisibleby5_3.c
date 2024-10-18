#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("it is a divisible by 5&3");
    }
    else{
        printf("it is not divisible by 5&3");
    }
    
    return 0;
}