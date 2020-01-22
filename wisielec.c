#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funkcje.c"
#include "game.c"
#include "choose_category.c"

int main(){
    int c;
    int b;
    int d;
    char tab[1];
    char tab3[100];
//menu 
printf("HANGMAN 2020\n 1.PLAY\n 2.RANKING\n 3.EXIT GAME\n");
//wybór menu 
int a;
scanf("%d", &a);
switch(a){
case 1:         //start gry
    printf("Choose language\n 1.Polski\n 2.English\n 3.Deutsch\n");
    scanf("%d", &b);
    if(b==1){
        //printf("tutaj jest gra po polsku\n");
        choose_category_pl(c);
        game_polisch(tab);
    }
    if(b==2){
        //printf("tutaj jest gra po angielsku\n");
        choose_category_eng(c);
        game_english(tab);
    }
    if(b==3){
        //printf("tutaj jest gra po niemiecku\n");
        choose_category_d(c);
        game_deutsch(tab);
    }

    break;
case 2: printf("tutaj jest ranking\n");        //ranking
    break;
case 3: return 0;                             //zakończ gre
    break;
default: printf("Type numer 1-3\n");
}
return 0;
}