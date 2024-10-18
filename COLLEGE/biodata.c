#include <stdio.h>
    int main(){
        void india();
        india();
        return 0;
    }

    void india(){
        printf("you are in india\n");
        void australia();
        australia();
        return;
    }

    void australia (){
        printf("you are in Australia\n");
        void england();
        return;
    }
    void england (){
        printf("you are in emgland\n");
        return;
    }