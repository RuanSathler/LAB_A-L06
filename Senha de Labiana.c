#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int qtdVezes, numRepetido, cont;  


  while((qtdVezes = LerInt()), (numRepetido = LerInt()), qtdVezes!=0){
   for(cont = 0; cont<qtdVezes; cont++){
     printf("%d", numRepetido);
   }
  }

  return 0;  
}
