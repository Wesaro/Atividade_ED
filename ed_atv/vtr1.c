#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[5], soma = 0;
    int i = 0;

    for(i = 0; i<5; i++){
        printf("Digite um valor:\n ");
        scanf("%f", &vetor[i]);
        printf("%.2f", vetor[i]);
    }

    for (i+ 0; i<5; i++){
        soma += vetor [i];
    }
    float me = soma/5;

    printf("%.2f", me);
}