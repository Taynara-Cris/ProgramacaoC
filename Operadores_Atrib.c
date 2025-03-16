#include <stdio.h>
int main(){

    /*Atribuição simples (=)
      Atribuição com soma (+=)
      Atribuição com subtração (-=)
      Atribuição com multiplicação(*=)
      Atribuição com divisão (/=)
      */

     

      int N1 = 2, N2 = 12, resultado;

      resultado = 10;
      printf("Resultado é igual: %d\n", resultado);
      
      //resultado = resultado + 20;
      resultado += 20;
      printf("Resultado da + é igual: %d\n", resultado);
      
      //Resultado = resultado - N1;
      resultado -= N1;
      printf("Resultado da - é igual: %d\n", resultado);

      //Resultado = resultado * 5;
      resultado *= 5;
      printf("Resultado da * é igual: %d\n", resultado);
      
      //Resultado = resultado / 2;
      resultado /= 2;
      printf("Resultado da / é igual: %d\n", resultado);


}