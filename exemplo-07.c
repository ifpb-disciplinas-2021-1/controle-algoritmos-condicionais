/* Escreva um programa em linguagem C leia um número inteiro, simule um menu de opções 
    e realize as seguintes operações:
    Menu:
        1 - exibir uma mensagem "Bem vindo!"
        2 - sair
        outro valor - exibir uma mensagem  "Opção inválida"
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Menu: \n");
    printf("1 - exibir uma mensagem \"Bem vindo!\" \n");
    printf("2 - sair \n");
    printf("outro valor - exibir uma mensagem  \"Opção inválida\" \n");
    scanf("%i", &numero);
    switch(numero){
        case 1: printf("Bem vindo! \n"); break;
        case 2: printf("sair \n"); break;
        default: printf("Opção inválida \n"); 
    }
    return 0;
}