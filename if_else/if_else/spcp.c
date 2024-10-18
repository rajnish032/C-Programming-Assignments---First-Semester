#include<stdio.h>
int main(){
    int cp;
    printf("Enter a cost price :");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price :");
    scanf("%d",&sp);
    if(sp>cp){
        printf("profit");
    
    }
    if(sp<cp){
        printf("Loss");
    }
    if(sp==cp){
        printf("no profit ,no loss");
    }
    
       
    
    
    return 0;
}