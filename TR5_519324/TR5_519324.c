#include <stdio.h>
#include <stdlib.h>
#include "heap.h"



HEAP* HEAP_create(int n, COMP* compara){
    HEAP* heap = malloc(sizeof(HEAP));           
    heap->N = n; //heap seta para N que � o tamanho do vetor
    heap->P = 0; //heap seta para P que � o n�mero de elementos do vetor
    heap->comparador = compara; //heap seta para a fun��o comparador recebendo o compara
    heap->elems = malloc(n * sizeof(void *));
    
    for(int i = 0;i<n;i++){
        heap->elems[i] = NULL;}//heap acessa o vetor de um elementos e nicializa com o NULL;
    return heap;} //retornando heap

void HEAP_add(HEAP* heap, void* newelem){
    if(heap->P < heap->N){//aki o heap acessa os ponteiros (N) e (P) e verifica se o total de elementos � maior do que o tamanho do vetor
    	heap -> P;//heap acessa o ponteiro elementos
    	heap -> N; // heap acessa o tamanho do ponteiro vetor
        if(heap->P == 0){//aki o heap acessa o ponteiro elementos e verifica que � igual a (0) 
            heap->elems[0] = newelem; //heap acessa  vetor de elementos no indice 0 e adicionba novo  elemento
            heap->P = heap->P +1;} //aki o heap adiciona mais 1 no ponteiro elementos 
        else{                          
            heap->elems[heap->P] = newelem; // aki o heap acessa elementos do vetor e recebe o novo elemento
            heap->P =  heap->P +1; //heap seta para o n�mero de elementos no vetor incrementando mais 1
            for(int i= heap -> P - 1; i > 0; i = i - 1){ // um la�o � execultado 
                if(heap->comparador(heap->elems[i], heap->elems[i/2]) == 1){
                    void* auxp = heap->elems[i]; //aux aponta para o void que recebe a heap que aponta para o vetor de um elemento
                    heap-> elems[i] = heap->elems[i/2];// aki o heap acessa o indice dos elementos e divide por 2
										heap-> elems[i/2] = auxp;}}}}}
void* HEAP_remove(HEAP* heap){ // aki usa a fun��o remover
    void* auxp = heap->elems[0]; // aux aponta para o void em que recebe a heap que aponta para o vetor do elemento 0
    for(int i = 0;i< heap -> P;i = i + 1){// aki um la�o � execultado
        heap->elems[i] = heap->elems[i + 1];} //heap aponta o vetor de um elemento recebendo a  heap aponta para o vetor de um elemento somando mais 1
    heap->P--; //heap acessa o n�mero de elementos no vetor decrementando
    for(int i=heap->P-1;i>0;i--){ // aki um la�o � executado
        if(heap->comparador(heap->elems[i], heap->elems[i/2]) == 1){// aki o heap acessa os ponteiros dos elementos e verifica se o resto da divisa � 0
            void* aux = heap -> elems[i]; //aux aponta para o void em que recebe a heap seta para o vetor de um elemento
            heap->elems[i] = heap->elems[i/2]; //heap aponta para o vetor de um elemento em que recebe a heap aponta para o vetor de um elemento dividido por 2*/
            heap->elems[i/2] = aux;}}//heap aponta para o vetor de um elemento dividido por 2 em que recebe aux
    return auxp;  //retornando aux
}



