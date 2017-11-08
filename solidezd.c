#include <stdio.h>
int solidez(int a[], int p, int r);
int main(){
    int tam = 8;
    int vetor[] = {20,-30,15,-10,30,-20,-30,30};
    int i;
    for (i = 0; i < tam; i++){
        printf("%d\n", vetor[i]);
    }

    printf ("\n\nSolidez: %d\n\n",solidez(vetor, 0,tam-1));

    return 0;
}

int solidez(int a[], int p, int r){
    int q, x;
    int f[r];

    f[p] = a[p];
    for(q = p+1; q <= r; q++){
        if(f[q-1] > 0){
            f[q] = f[q-1] + a[q];

        }else{
            f[q] = a[q];
        }
    }
    x = f[p];
    for(q = p+1; q <= r; q++){
        if(f[q] > x){
            x = f[q];
        }
    }
    return x;

}
