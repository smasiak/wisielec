void choose_category_eng(int c){
    int d;
    drawing_numbers(d);
   printf("Choose category\n 1.sport\n 2.art\n 3.history\n");
    scanf("%d", &c);
    char tab3[11];
    if(c==1){
       if(d==1){
       tab3[11]={"ball"};
       }
       if(d==2){
       tab3[11]={"goal"};
       }
       if(d==3){
       tab3[11]={"bike"};
       }
       if(d==4){
       tab3[11]={"skateboard"};
       }
       if(d==5){
       tab3[11]={"hockey"};
       }
    }
    if(c==2){
        
    }
    if(c==3){
        
    }
}
void choose_category_pl(int c){
   printf("Choose category\n 1.sport\n 2.sztuka\n 3.historia\n");
    scanf("%d", &c);
    if(c==1){
  
    }
    if(c==2){
        
    }
    if(c==3){
        
    }
}
void choose_category_d(int c){
   printf("Choose category\n 1.Sport\n 2.Kunst\n 3.Geschichte\n");
    scanf("%d", &c);
    if(c==1){

    }
    if(c==2){
        
    }
    if(c==3){
        
    }
}
