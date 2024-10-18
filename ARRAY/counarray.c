#include<stdio.h>
int main(){
    int arr[] = {17,12,31,4,5,6,7};
    int n = sizeof(arr)/4;
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x = 0;
    int count = 0;
    for(int i =0; i<n;i++){
        if(arr[i]>x) count++;
    }
    printf("%d",count);
    return 0;
}