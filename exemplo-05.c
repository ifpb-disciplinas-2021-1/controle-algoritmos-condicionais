/*
Escreva um programa em linguagem C leia o valor de uma temperatura e determine se está quente ou frio.
Considere que estará quente caso a temperatura for superior a 28 graus. Deve ser utilizada uma variável para 
armazenar e controlar este estado da temperatura, que assume 0 para frio e 1 para quente.

ler uma temperatura
se temperatura > 28 then estado = quente (1)
caso contrario estado = frio (0)
*/
#include <stdio.h>
int main(){
    float temperatura;
    int estado;
    printf("Digite o valor da temperatura: ");
    scanf("%f", &temperatura);
    // se temperatura > 28 then estado = 1: estado=0
    estado = temperatura > 28 ? 1: 0;
    printf("Valor do estado da temperatura : %d \n", estado);
    return 0; 
}