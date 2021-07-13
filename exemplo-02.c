/*
Desenvolva um algoritmo capaz de verificar se 
um número inteiro, dados como entrada, é par ou impar

7 / 2 = 3, com resto 1
6 /2 = 3, com RESTO 0
*/
#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("é par \n");
    }else{
        printf("é impar \n");
    }
    return 0;
}