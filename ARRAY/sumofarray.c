#include<stdio.h>
int main(){
    int arr[]= {5,8,1,9,4,6,8,9,5};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}