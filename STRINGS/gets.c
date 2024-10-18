#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    //scanf("%s",str); //only the first word will be consudered
    gets(str); //entire sentence can be input
    printf("your input was : %s",str);
    return 0;
}