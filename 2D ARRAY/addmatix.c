#include<stdio.h>
int main(){
    int r;
    printf("enter a no of rows :");
    scanf("%d",&r);
    int c;
    printf("enter a no of colpumns :");
    scanf("%d",&c);
    
    printf("enter no of all elements\n");
     int arr[r][c];

    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            scanf("%d",&arr[i][j]);
 
        }
    }
    printf("\n");
     for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            printf("%d",arr[i][j]);

        }
        printf("\n");
    }
}