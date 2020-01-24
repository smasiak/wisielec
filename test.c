#include <stdio.h>
#include <string.h>

char tab1[0];
char tab[3]={"KOT"};
int main(){
   scanf("%s", tab1);
   if(tab1[0]=tab[0]){
      printf("K _ _");
      scanf("%s", tab1);
      if(tab1[0]=tab[1]){
         printf("K O _");
      }
      else 
      printf("K _ _");
      if(tab1[0]=tab[2]){
         printf("K O T");
      }
      else 
      printf("K _ _");
   }
   if(tab1[0]=tab[0]){
      printf("K _ _");
    }

   if(tab1[0]=tab[1]){
      printf("_ O _");
    }
    
   if(tab1[0]=tab[2]){
      printf("_ _ T");
    }
    else{
      printf("Litera nie została odgadniona.");
    
}
  return 0;
}