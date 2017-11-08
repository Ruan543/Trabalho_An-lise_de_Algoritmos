#include <stdlib.h>
#include <stdio.h>

struct no{
    int valor;
    struct no *dir;
    struct no *esq;

};



int arv_insere(struct no** raiz, int valor);
int arv_busca(struct no** ptrRaiz, int valor);
struct no** arv_inicializa();
int main() {
    struct no** ptrRaiz;
    ptrRaiz = arv_inicializa();

    	arv_insere(ptrRaiz,4);
    	arv_insere(ptrRaiz,2);
    	arv_insere(ptrRaiz,1);
    	arv_insere(ptrRaiz,3);
    	arv_insere(ptrRaiz,8);
    	arv_insere(ptrRaiz,7);
    	arv_insere(ptrRaiz,9);
    	arv_insere(ptrRaiz,5);
    	arv_insere(ptrRaiz,6);

    if (arv_busca(ptrRaiz, 15)) printf("O valor foi encontrado\n");
    else printf("O valor não foi encontrado \n");


}

int arv_insere(struct no** raiz, int valor){ //insere
    if(raiz == NULL){
       printf("A árvore não foi inicializada\n");
        return 0;
    }
    if(*raiz == NULL){
        struct no* ptrAux = (struct no*)malloc(sizeof(struct no));
        ptrAux->dir = NULL;
        ptrAux->esq = NULL;
        ptrAux->valor = valor;
        *raiz = ptrAux;

        return 1;
    }
    else{
        if(valor == (*raiz)->valor) return 0;

        else if(valor > (*raiz)->valor){
           return arv_insere(&((*raiz)->dir), valor);
       }
        else if(valor < (*raiz)->valor){
           return arv_insere(&((*raiz)->esq), valor);
       }
    }

}

int arv_busca(struct no** ptrRaiz, int valor){ 
    if(*ptrRaiz == NULL){
        return 0;
    }
    if((*ptrRaiz)->valor == valor) return 1;
    else if((*ptrRaiz)->valor > valor) return arv_busca(&((*ptrRaiz)->esq), valor );
    else return (arv_busca(&((*ptrRaiz)->dir), valor));
}

int arv_vazia(struct no** ptrRaiz){ 

    if(ptrRaiz == NULL || *ptrRaiz == NULL){
       printf("Árvore vazia!\n");
        return 1;
    }
    printf("Árvore não vazia!\n");
    return 0;
}
struct no** arv_inicializa(){ 
    struct no** ptrAux = (struct no**)malloc(sizeof(struct no*));
    if(ptrAux != NULL){ *ptrAux = NULL;}
    //*ptrAux = NULL;
    return ptrAux;
}
