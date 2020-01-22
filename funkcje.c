void wybor_jezyka(int b){
    printf("Choose language\n 1.Polski\n 2.English\n 3.Deutsch\n");
    scanf("%d", &b);
    if(b==1){
        printf("tutaj jest gra po polsku\n");
    }
    if(b==2){
        printf("tutaj jest gra po angielsku\n");
    }
    if(b==3){
        printf("tutaj jest gra po niemiecku\n");
    }
}
void drawing_numbers(int d){
    srand(time(NULL));
    printf("%d\n", rand()%5);
}

