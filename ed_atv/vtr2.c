#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = 0;

    soma = A[0] + A[2] + A[5];
    A[4] = 100;

    int i = 0;
    for (i = 0; i<6; i++){
        printf("%d", A[i]);
    }
}