#include <stdio.h>
int main(){

    int N1,N2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o número 1: \n");
    scanf("%d", &N1);

    printf("Digite o número 2 : \n");
    scanf("%d", &N2);
    
    //OPERAÇÃO SOMA
    soma = N1 + N2;

    //OPERAÇÃO SUBTRAÇÃO
    subtracao = N1 -N2;

    //OPERAÇÃO MULTIPLICAÇÃO
    multiplicacao = N1 * N2;

    //OPERAÇÃO DIVISÃO
    divisao = N1 / N2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);




}