#include<stdio.h>
int main(){

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // A variável a foi convertiva implicitamente em float, pois a variável RESULTADO se encontra em float

    printf("Resultado: %.2f\n", resultado);


    return 0;
}