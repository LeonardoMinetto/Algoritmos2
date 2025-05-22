#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "TAD_listasEncadeadas.h"

void inverteLista(ListaE *l){
    Cell *aux1, *aux2=NULL;
    if(l == NULL){
        aux1=l->head;
        while(aux1!=NULL){
            l->head = aux1->next;
            aux1->next = aux2;
            aux2=aux1;
            aux1=l->head;
        }
        l->head = aux2;
    }
}
int main(){
    ListaE *l = criar_listaE();
    int num;
    while(num != -1){
        scanf("%d", &num);
        if(num == -1){
            break;
        }
        inserir_primeiro(num, l);
        
    }
    inverteLista(l);
    imprimir(l);
    Cell *aux=l->head;
    Cell *aux2;
    while(aux2!=NULL){
        aux2 = aux;
        aux = aux->next;
        free(aux2);
    }

}