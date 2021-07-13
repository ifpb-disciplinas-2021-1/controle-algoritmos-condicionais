/*
Escreva um programa em linguagem C leia um número inteiro, de 1 a 5, e imprima o
seu valor por extenso.
    
    1 -> 'um'
    2 -> 'dois'
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    switch (numero){ //char ou int
        case 1: printf("Um \n"); break;
        case 2: printf("Dois \n"); break;
        case 3: printf("Três \n"); break;
        case 4: printf("Quatro \n"); break;
        case 5: printf("Cinco \n"); break;
        default: printf("Número fora do intervalo \n");
    }
    // if(numero ==1){
    //     printf("Um");
    // }
    // if(numero ==2){
    //     printf("Dois");
    // }
    // if(numero ==3){
    //     printf("Três");
    // }
    // if(numero ==4){
    //     printf("Quatro");
    // }
    // if(numero ==5){
    //     printf("Cinco");
    // }
    return 0;
}