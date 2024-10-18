#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Leap year");
    }
    else{
        printf("not leap year");
    }
       
    
    
    return 0;
}