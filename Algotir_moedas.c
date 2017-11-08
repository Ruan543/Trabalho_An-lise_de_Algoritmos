#include <stdio.h>
#include <stdlib.h>
void moedas(float valor);
int main(){

    moedas(0.95);
    return 0;
}

void moedas(float valor){
    	int vet[6];
    	int moedas[] = {100, 50, 25, 10, 5, 1};
    	int i;

    	for(i=0; i < 6; i++){
        	vet[i] = 0;
    	}

    valor *= 100.0;
    while(valor != 0){
        if(valor >= 100){
            valor -= 100;
            vet[0]++;
            continue;
        }else if(valor >= 50){
            valor -= 50;
            vet[1]++;
            continue;
        }else if(valor >= 25){
            valor -= 25;
            vet[2]++;
            continue;
        }else if(valor >= 10){
            valor -= 10;
            vet[3]++;
            continue;
        }else if(valor >= 5){
            valor -= 5;
            vet[4]++;
            continue;
        }else{
            valor --;
            vet[5]++;
            continue;
        }
    }

    for(i=0; i < 6; i++){
        printf("%d moedas de %d centavos;\n",vet[i], moedas[i]);
    }



}
