/* Escreva um programa em linguagem C leia um número inteiro, simule um menu de opções 
e realize as seguintes operações:
Menu:
    1 - exibir uma mensagem
    2 - ler um número e exibi-lo
    3 - sair
*/
#include <stdio.h>
int main(){
    int numero;
    int segundo;
    printf("Menu: \n");
    printf("1 - exibir uma mensagem \n");
    printf("2 - ler um número e exibi-lo \n");
    printf("3 - sair \n");
    scanf("%i", &numero);
    switch(numero){
        case 1: printf("olá, tudo bem?! \n"); break;
        case 2: printf("digite um número: "); 
                scanf("%i", &segundo);
                printf("O segundo número digitado foi: %i \n", segundo);
                break;
        case 3: printf("sair \n"); break;        
    }
    return 0;
}