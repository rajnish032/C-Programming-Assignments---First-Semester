#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        char  name[50];
        int noofpages;
        float price;
    } a,b,c;
    a.noofpages=150;
    a.price = 421.5;
    strcpy(a.name,"Secret Seven");

    printf("%d\n",a.noofpages);
    printf("%s\n",a.name);
    printf("%f\n",a.price);
    return 0;

    
}