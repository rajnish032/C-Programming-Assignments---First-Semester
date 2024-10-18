#include<stdio.h>
int main(){
    int m;
    printf("enter no of rows of 1st matrix : ");
    scanf("%d",&m);
    int n;
    printf("enter no of column of 1st matrix : ");
    scanf("%d",&n);
    int a[m][n];
    printf("\n Enter no of all 1st matrix : ");
    
    for(int i =0; i<m; i++ ){
        for(int j = 0; j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int p;
    printf("enter no of rows of 2nd matrix : ");
    scanf("%d",&p);
    int q;
    printf("enter no of column of 2nd matrix :");
    scanf("%d",&q);
    int b[p][q];
    printf("\n Enter no of all 2nd matrix : ");
    for(int i =0; i<p; i++ ){
        for(int j = 0; j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }

    if(n!=p){
        printf("the matrices cannot be applied");
    }
    else{
        int res [m][q];
        for(int i = 0; i<m;i++){
            for(int j = 0; j < q; j++){
                res[i][j] = 0;
                for(int k = 0;  k < n; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("the resultant of matrix is :\n");
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < q; j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;

}