#include<stdio.h>
int main(){
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;//  S A B C D
    };

    struct pokemon pikachu;

    
        pikachu.attack = 60;
        pikachu.speed = 100;
        pikachu.hp = 50;
        pikachu.tier = 'A';
    
     struct pokemon charizard;
    
         charizard.attack = 130;
         charizard.speed = 80;
         charizard.hp = 80;
         charizard.tier = 'S';

    
     printf("%d",pikachu.hp);;
     return 0;
    
    
    
}