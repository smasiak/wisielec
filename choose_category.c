#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void drawing_numbers(int d){        //funkcja służąca do losowania liczby "d" która ma oznaczać numer słowa
    srand(time(NULL));
    printf("%d\n", rand()%3);
}
int choose_category_eng(int c){
    int d;
    drawing_numbers(d);
   printf("Choose category\n 1.sport\n 2.art\n 3.history\n");
    scanf("%d", &c);
    if(c==1){
        printf("category sport\n");
    }
    if(c==2){
         printf("category art\n");
    }
    if(c==3){
         printf("category history\n");
    }

    game();
}
int choose_category_pl(int c){
    int d;
    drawing_numbers(d);
    if(c==1){
        printf("category sport\n");
    }
    if(c==2){
         printf("category art\n");
    }
    if(c==3){
         printf("category history\n");
    }
    game();

}
int choose_category_d(int c){
    int d;
    drawing_numbers(d);
    if(c==1){
        printf("Kategorie Sport\n");
    }
    if(c==2){
         printf("Kategorie Kunst\n");
    }
    if(c==3){
         printf("Kategorie (zawód po niemiecku lol) \n");
    }
     game();
}