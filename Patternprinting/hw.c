#include<stdio.h>
int main(){
    int n;
    printf("enter no. of roows : ");
    scanf("%d",&n);
    int m;
    printf("enter no of column : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
    
        
        for (int j=1;j<=m;j++){
            
            printf("*");

        }
        printf("\n");
    }
    return 0;
}