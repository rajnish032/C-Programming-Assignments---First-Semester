#include<stdio.h>
int main(){
    int n;
    printf("the number of rows : ");
    scanf("%d",&n);
    int m;
    printf("the number of column :");
    scanf("%d",&m);
    //*************.....upto n no of stars
    for(int i = 1;i<=n;i++){//outer loop ->no of lines
        for(int i=1;i<=m;i++){//innner loops ->no of stars in each line
            printf("*");

        }
        printf("\n");
    }

    return 0;
}