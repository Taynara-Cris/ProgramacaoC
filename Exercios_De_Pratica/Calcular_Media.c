#include<stdio.h>
int main(){


    float Nota1 = 5.2;
    float Nota2 = 6.3;
    float Média = Nota1 + Nota2 /2;

    printf("Insira a primeira nota: ");
    scanf("%.2f", &Nota1 );

    printf("Insira a segunda nota: ");
    scanf("%.2f", &Nota2);

    printf("A sua média é: %.2f", Média);


    return 0;
}