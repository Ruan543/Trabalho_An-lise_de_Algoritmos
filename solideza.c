#include <stdio.h>

int main(){
    int tam = 8;
    int vetor[] = {20,-30,15,-10,30,-20,-30,30};
    int i;
    for (i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }

    printf ("\n\nSolidez: %d\n\n",solidez1(vetor, 0,tam-1));

    return 0;
}


int solidez1(int A[], int p, int r){
    int x = A[r];
    int q;
    int j;
    for(q = r-1; q >= p ; q--){

        int soma = 0;

        for(j = q; j <= r; j++){
            soma = soma  + A[j];
            if(soma > x){
                x = soma;
            }
        }
    }
    return x;

}
