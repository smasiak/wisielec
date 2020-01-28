#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.c"                  //ciało gry
#include "choose_category.c"       //wybór kategori

int main(){
    int a;       //zmienna wyboru w menu
    int b;       //zmienna wybor języka
    int c;       //zmienna wyboru kategorii
    int d;       //zmienna losowa do wyobru przez komputer słowa z kategorii do odgadniecia
    char tab[1]; //podbieranie litery do odgadnięcia
    char answer[128];  //słowo do odgadnięcia
//menu 
printf("HANGMAN 2020\n 1.PLAY\n 2.RANKING\n 3.EXIT GAME\n");
//wybór w menu 
scanf("%d", &a);
switch(a){                 
case 1:         //start gry
    printf("Choose language\n 1.Polski\n 2.English\n 3.Deutsch\n");
    scanf("%d", &b);
    if(b==1){
        choose_category_pl(c);               //gra po polsku//odnośnik do funkcji z folderu choose category
    }
    if(b==2){
        choose_category_eng(c);              //gra po angielsku//odnośnik do funkcji z folderu choose category
    }
    if(b==3){
        choose_category_d(c);                //gra po niemiecku//odnośnik do funkcji z folderu choose category
    }

    break;
case 2: printf("tutaj jest ranking\n");        //ranking
    break;
case 3: return 0;                             //zakończ gre
    break;
default: printf("Type number 1-3\n");
}
return 0;
}