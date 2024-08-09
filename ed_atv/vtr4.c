#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, maior = 0, menor = 0;
    int x[10];

    printf("Digite um numero:\n");

    for(i = 0; i<10; i++){
        scanf("%d", &x[i]);
        if(i==0){
            maior = x[10];
            menor = x[10];
        }
        if (x[10] > maior){
            maior = x[i];
        }
        else if(x[10] < menor){
            menor = x[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}