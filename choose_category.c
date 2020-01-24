#include <stdio.h>
#include <stdlib.h>

void choose_category_eng(int c){
    int d;
    drawing_numbers(d);
   printf("Choose category\n 1.sport\n 2.art\n 3.history\n");
    scanf("%d", &c);
    if(c==1){
        printf("category sport\n");
        char answer[128]={"BALL"};
    }
    if(c==2){
        printf("category art\n");
    }
    if(c==3){
        printf("category history\n");
    }
}
void choose_category_pl(int c){
   printf("Choose category\n 1.sport\n 2.sztuka\n 3.historia\n");
    scanf("%d", &c);
    if(c==1){
        printf("kategoria sport\n");
    }
    if(c==2){
        printf("kategoria sztuka\n");
    }
    if(c==3){
        printf("kategoria historia\n");
    }
}
void choose_category_d(int c){
   printf("Choose category\n 1.Sport\n 2.Kunst\n 3.Geschichte\n");
    scanf("%d", &c);
    if(c==1){
        printf("Kategorie Sport\n");
    }
    if(c==2){
        printf("Kategorie Kunst\n");
    }
    if(c==3){
        printf("Kategorie Geschiste\n");
    }
}
