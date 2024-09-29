/* NAO ALTERE ESTA PARTE DO CODIGO
 */
#include <stdio.h>
#include <stdlib.h>
int codebench_exercicio_erro(void)
{
	puts("Erro! A funcao printf nao deve ser usada neste exercicio!");
	puts("Use a funcao `putchar()' para imprimir cada caracter.");
	puts("Exemplo: putchar('#'); imprime uma veze o caracter #");
	exit(EXIT_FAILURE);
}
#define printf(...) codebench_exercicio_erro()
#define puts(...) codebench_exercicio_erro()
/* NAO ALTERE O CODIGO ACIMA
 */
int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(void){

  int  contColuna, contLinha, coorLinha, coorColuna;
  
  coorLinha = LerInt();
  coorColuna= LerInt();
  
  for(contColuna = 0; contColuna<12; contColuna++){
    if(contColuna==0 || contColuna==11) putchar('+');
    else putchar('-');
  }
  putchar('\n');

  for(contLinha=1; contLinha<21; contLinha++){
    for(contColuna = 0; contColuna<12; contColuna++){
      if(contColuna==0 || contColuna==11) putchar('|');
      else if((contLinha>=coorLinha && contLinha<=(coorLinha+1)) && (contColuna>=coorColuna && contColuna<=(coorColuna+1))) putchar('#');
      else putchar('.');
  }
    putchar('\n');
  }

  for(contColuna = 0; contColuna<12; contColuna++){
    if(contColuna==0 || contColuna==11) putchar('+');
    else putchar('-');
  }
  putchar('\n');

  return 0;
}
