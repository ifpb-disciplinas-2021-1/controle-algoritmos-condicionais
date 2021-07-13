/*
Desenvolva um algoritmo em C que leia um número inteiro e determine se é um dia de semana 
ou final de semana. Considere que a semana começa com o domingo, com valor igual a 1;
1 - domingo -final de semana
2 - segunda - dia de semana
3 - terça - dia de semana
4 - quarta - dia de semana
5 - quinta - dia de semana
6 - sexta - dia de semana
7 - sábado - final de semana
*/
# include <stdio.h>
int main(){
    int dia;
    printf("Digite o dia da semana: ");
    scanf("%i", &dia);
    switch(dia){
        case 1: 
        case 7: printf("final de semana \n"); break;
        case 2: 
        case 3: 
        case 4: 
        case 5: 
        case 6: printf("dia de semana \n"); break;
        default: printf("dia inválido \n");
    }
    return 0;
}
