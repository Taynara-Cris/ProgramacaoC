#include <stdio.h>
int main(){

/*Incremento e Decremento: Aumenta ou diminui o valor de uma variável em uma unidade*/
/*Incremento: (++)
  Pré-incremento: ++a
  Pós-incremento: a++
  
  Decremento: (--)
  Pré-decremento: --a
  Pós-decremento: a--*/

int n1 = 10, resultado;

printf("O valor antes do incremento é : %d\n", n1);


//seria como se fosse n1 = n1 +1;
//n1 += 1;
//Pós-incremento: 
//resultado = n1;
//n1++
//printf("O valor após o incremento é : %d\n", n1);
resultado = n1++;

printf("Após Pós-incremento- numero1: %d - resultado: %d\n", n1, resultado);

resultado = ++n1;

printf("Após Pré-incremento- numero1: %d - resultado: %d\n", n1, resultado);

//n1--;
//seria como se fosse n1 = n1 - 1;
//n1 -= 1;
//printf("O valor após o decremento é : %d\n", n1);
resultado = n1--;
printf("Após Pós-decremento- numero1: %d - resultado: %d\n", n1, resultado);

resultado = --n1;
printf("Após Pré-decremento- numero1: %d - resultado: %d\n", n1, resultado);







} 
 
 