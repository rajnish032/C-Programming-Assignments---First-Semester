#include<stdio.h>
int main(){
    
    char arr[]= {'h','e','l','l','o','\0'};
    //char ch = '\0'; //null character
    //printf("%d",arr[2]);

    int i = 0;
    while(arr[i]!='\0'){
    printf("%c ",arr[i]);
    i++;
    }
    return 0;
}