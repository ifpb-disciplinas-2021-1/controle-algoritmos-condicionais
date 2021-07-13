/*
Desenvolva um algoritmo que leia um número e verifique se ele é maior ou igual a 10.
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero > 10){ //verdadeiro
        printf("Número maior que 10 \n");
    }else{ //falsa
        printf("Número menor que 10 \n");
    }
    return 0;
}