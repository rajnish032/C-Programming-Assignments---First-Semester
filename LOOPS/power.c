#include<stdio.h>
int main(){
int a,b;
printf("enter base : ");
scanf("%d",&a);
printf("enter power :");
scanf("%d",&b);
int power = 1;
for(int i=1;1<=b;i++){
        power = power * a;
}
printf("%d raised to the power %d is %d",a,b,power);
     return 0;
}
    