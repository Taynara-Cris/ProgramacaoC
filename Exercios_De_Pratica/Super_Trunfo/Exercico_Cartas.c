#include<stdio.h>
int main(){


//Variáveis Carta 1
char Estado_01 = 'S';
char Codigo_Carta_01 [3] = "A1";
char Nome_Cidade_01 [60] = "Sergipe";
int Populacao_01 = 15000000;
float Area_01 = 13200.00;
float PIB_01 = 2500000.00;
int Quant_Pontos_Turisticos_01 = 5;
float Densidade_Populacional_01 = 8102.47;
float PIB_Per_Capita_01 = 56724.32;


//Variáveis Carta2
char Estado_02 = 'P';
char Codigo_Carta_02 [2] ="A2";
char Nome_Cidade_02 [60] = "São Paulo";
int Populacao_02 = 20000000;
float Area_02 = 24000.00;
float PIB_02 = 5000000.00;
int Quant_Pontos_Turisticos_02 = 10;
float Densidade_Populacional_02 = 8102.47;
float PIB_Per_Capita_02 = 56724.32;

//Coleta de dados

printf("CARTA 1: \n\n");

printf("Digite uma letra de A a H para o estado: ");
scanf("%c", &Estado_01);

printf("Digite um número de 01 a 04 que será o código da cidade: ");
scanf("%s", &Codigo_Carta_01 );

printf("Digite o nome da cidade: ");
scanf("%s", &Nome_Cidade_01);

printf("Digite o número populacional: ");
scanf("%d", &Populacao_01);

printf("Digite a área em metros² da cidade: ");
scanf("%f", &Area_01);

printf("Digite o PIB: ");
scanf(" %f", &PIB_01);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Quant_Pontos_Turisticos_01);

printf("\n\n");

printf("CARTA2: \n\n");

printf("Digite uma letra de A a H para corresponder ao estado: ");
scanf(" %c", &Estado_02);

printf("Digite um número de 01 a 04 que será o código da cidade: ");
scanf(" %s", &Codigo_Carta_02);

printf("Digite o nome da cidade: ");
scanf("%s", &Nome_Cidade_02);

printf("Digite o número populacional: ");
scanf("%d",&Populacao_02);

printf("Digite a área em km² da cidade: ");
scanf("%f", &Area_02);

printf("Digite o PIB: ");
scanf("%f", &PIB_02);

printf("Digite a quantidade de pontos turísticos: ");
scanf("%d", &Quant_Pontos_Turisticos_02);

printf("\n");

//Exibição de dados

printf("CARTA 1:\n\n");

printf("Estado: %c\n", Estado_01);
printf("Código: %c%s\n", Estado_01, Codigo_Carta_01);
printf("Nome da cidade: %s\n", Nome_Cidade_01);
printf("População: %d\n", Populacao_01);
printf("Área: %f km²\n", Area_01);
printf("PIB : %.3f bilhões de reais\n", PIB_01);
printf("Número de pontos turísticos: %d\n", Quant_Pontos_Turisticos_01);

printf("\n\n");

printf("CARTA 2:\n\n");

printf("Estado: %c\n", Estado_02);
printf("Código: %c%s\n", Estado_02, Codigo_Carta_02);
printf("Nome da cidade: %s\n", Nome_Cidade_02);
printf("População: %d\n", Populacao_02);
printf("Área: %f km²\n", Area_02);
printf("PIB : %.3f bilhões de reais\n", PIB_02);
printf("Número de pontos turísticos: %d\n", Quant_Pontos_Turisticos_02);

return 0;
}