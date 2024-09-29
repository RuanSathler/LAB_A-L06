#include <stdio.h>
#include <stdlib.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

void imprimeMenorPar(int menorPar){
  if((menorPar%2)==0) printf("%d\n", menorPar);
  else printf(":(\n");
  
}

int main(){

  int menorPar, prox, cont, encontrouPar;  

  menorPar = 1;
  cont = encontrouPar = 0;

  do{
    prox = LerInt();
    if((prox%2)==0){
      menorPar = prox;
      encontrouPar = 1;
    }
    cont++;    
  }while(cont<10 && encontrouPar==0);

  while(cont<10){
    prox = LerInt();
    if((prox%2)==0 && prox<menorPar){
      menorPar = prox;
      encontrouPar = 1;
    }
    cont++;    
  }
  
  imprimeMenorPar(menorPar);
  
  return 0;  
}
