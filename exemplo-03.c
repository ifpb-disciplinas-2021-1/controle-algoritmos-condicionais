/*
Desenvolva um algoritmo que leia duas notas e determine se o aluno está aprovado, ou não. 
Considere a média maior que 7, aprovado; menor que 4, reprovado; e, maior que 4 e menor que 7, Final.
*/
#include <stdio.h>
int main(){
    float primeira, segunda, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &primeira);
    printf("Digite a segunda nota: ");
    scanf("%f", &segunda);
    media = (primeira + segunda)/2;
    // se a media > 7  -- aprovado
    // caso contrario se media > 4 - final
    // caso contrario reprovado
    printf("Sua média foi: %.2f \n", media);
    if(media >= 7){
        printf("aprovado \n");
    }else if(media > 4){ // media > 4 e media < 7
        printf("final \n");
    }else{
        printf("reprovado \n");
    }

    return 0;
}