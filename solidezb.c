#include <stdio.h>
int solidez(int vet[], int p, int r);
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

int solidez(int vet[], int p, int r){
    int q, s, i, j, x;
    int x1, x2, y1, y2;
    y1 = 0;
    y2 = 0;
    x1 = 0;
    x2 = 0;
    x = 0;
    s=0;
    q = 0;
    if(p == r){
        return vet[p];
     }
    else{
        q = (p+r)/2;
        x1 = solidez(vet, p, q);
        x2 = solidez(vet, q+1, r);

        s = vet[q];
        y1 = s;

        for(i = q -1 ; i > p; i--){
            s += vet[i];
            if( s > y1) y1 = s;
            s = vet[q+1];
            y2 = s;
        }
        for(j = q+2; j <= r; j++){
            s += vet[j];
            if(s > y2) y2 = s;
        }
        if(x1 > x2 && x1 > y1+y2){
            x = x1;
        }if(x2 > x1 && x2 > y1+y2){
            x = x2;
        }if(y1+y2 > x1 && y1+y2 > x2 )x = y1+y2;



        return x;

     }

}



