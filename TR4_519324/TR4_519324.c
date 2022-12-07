#include <stdio.h>
#include <stdlib.h>
#include "ordvetor.h"


VETORORD* VETORD_create(int n, COMP* compara){
    VETORORD* ordvetor = malloc(sizeof(VETORORD));  //ponteiro vetorord aponta para o espaço de memoria que foi alocado para o VETORORD
    ordvetor->N = n; //vetor ordenado acessa N recebendo o tamanho do vetor
    ordvetor->P = 0; //vetor ordenado acessa P recebendo o número de elementos do vetor
    ordvetor->comparador = compara; //vetor ordenado acessa função comparador recebendo o compara
    ordvetor->elems = malloc(n * sizeof(void *)); //ponteiro vetorord acessa elementos atribuindo alocação de memoria para void
    for(int i = 0; i < n; i = i + 1){ // aki um laço é executado;
        ordvetor->elems[i] = NULL;} //vetor acessa o vetor de um elemento recebendo NULL
    return ordvetor;}//retornando vetor ordenado

void VETORD_add(VETORORD* vetor, void* newelem){
    if (vetor->P < vetor -> N) { // se o vetor acessa o número de elementos for menor que o vetor acessa  o tamanho do vetor
    	vetor->P; //vetor acessa o número de elementos
    	vetor->N; //vetor acessa o tamanho do vetor

			  if (vetor->P == 0) { //o vetor acessao número de elemento e verifica se igual a 0
            vetor->elems[0] = newelem;}  //o vetor acessa o vetor de elemento 0 recebendo um novo elemento
        	else if(vetor->comparador(newelem, vetor->elems[vetor->P-1]) == -1){ //caso vetor que acessa a função comparador é igual a -1
						vetor->elems[vetor->P] = newelem;} //o vetor acessa o vetor de elemento chamado vetor acessa o número de elementos recebendo um novo elemento

			  else if(vetor->comparador(newelem, vetor->elems[vetor->P-1]) == 0){// no caso vetor que acessa a função comparador é igual a -0
				vetor->elems[vetor->P] = newelem;} //o vetor acessa o vetor de elemento chamado vetor acessa número de elementos recebendo um novo elemento

				else { for (int i = vetor->P-1; i > -1; i = i-1){
                if (vetor -> comparador(newelem, vetor->elems[i]) == 1) {//caso vetor que acessa a função comparador é igual a 1
                    vetor -> elems[i + 1] = vetor->elems[i]; //vetor acessa o vetor de um elemento somando mais 1 recebendo um vetor que acessa o vetor de um elemento*/
                    vetor -> elems[i] = newelem;} //vetor acessa para o vetor de um elemento recebendo um novo elemento
                else break;}}
 	  vetor->P = vetor->P + 1;}} //vetor acessa o número de elementos no vetor incrementando

void* VETORD_remove(VETORORD* vetor){
    void* auxp = vetor->elems[0]; //ponteiro aux aponta para o espaço de memoria alocado para void recebendo o vetor acessa um vetor de elementos 0
    for(int i = 0; i <vetor -> P; i = i + 1){
        vetor-> elems[i] = vetor -> elems[i+1];} //vetor acessa o vetor de um elemento recebendo o vetor que acessa o vetor de um elemento somando mais 1
    vetor -> P = vetor -> P - 1;  //vetor acessa o número de elementos no vetor decrementando
    return auxp;} //retornando aux
