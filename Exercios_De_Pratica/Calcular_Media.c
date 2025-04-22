#include<stdio.h>
int main(){


    float Nota1, Nota2;
    float Media ;


    printf("***Programa de cálculo Média***\n\n");

    printf("Insira a sua primeira nota: ");
    scanf("%f", &Nota1);

    printf("Insira a sua segunda nota: ");
    scanf("%f", &Nota2);

    Media = (Nota1 + Nota2 )/2;//Caso as notas a serem fossem int poderia se forçar a média a ser exibida como (float) cast colocando a frente da função de somar

    printf("A sua média é: %.1f", Media);


    return 0;
}