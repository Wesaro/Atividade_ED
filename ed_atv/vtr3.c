#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int i =0;
//    int count = 0;
    for(i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i<10 ; i++){
        if(vetor[i]%2==0){
            vetor [i] = vetor[i]++;
            printf("Pares: %d\n", vetor[i]);
        }
    }
}
