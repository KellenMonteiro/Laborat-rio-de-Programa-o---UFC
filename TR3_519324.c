#include <stdio.h> // ................................................................... adicionando a biblioteca a ser usado
#include <stdlib.h> // .................................................................. adicionando a biblioteca a ser usado

int main() {	//  inicia a main (codigo principal)
	
    unsigned int x[200];// .............................................................. define que a variavel x so armazenará valores positivos sem sinal
    
		int y, z, k, w, j, i; // ............................................................ criando as variaveis do tipo inteiro a serem usadas

    i = 0;  // iniciado i com 0
    y = 0;  // iniciado y com 0
    z = 0;  // iniciado z com 0
    w = 0;  // iniciado w com 0
    
    while(i<200) { //.................................................................... inicializa o bloco while - enquanto o i for menor que 200 execute o laço
    	x[i] = 0;   //..................................................................... o vetor de x começa com o indice [0]
        i++;      //..................................................................... adicione mais 1
  	  } //............................................................................... finaliza o bloco while
  	  
		printf("Digite numeros entre 0 e 5000: \n"); //...................................... exibe mensagem para o usuario digitar valores

        while (y> -1) { //............................................................... inicializa o bloco while - enquanto o y for maior que -1 execute o laço abaixo
        		scanf("%d", &y);//........................................................... o scanf recebe os valores digitados pelo usuario
        		j = y / 32; // .............................................................. a variavel j é igual a variável y dividido por 32
        		if (y > -1 && y <= 5000) { //................................................ se y for maior que -1 e y for menor ou igual 5000 execute abaixo
        			x[j] = x[j] | (1 << (y-(32*j))); //........................................ o vetor do x recebe  j = o vetor do x recebe j ou 32*j -y decrementando 1 esquerda  
        	 	 	 	 if(y>i) { //............................................................ inicializa o bloco if - se y for maior que i execute o bloco	
							i=y; //.................................................................... i é igual a y
 	 	 	 	  			}  // ................................................................... finaliza o segundo bloco de condição. 
  			}// ............................................................................. finaliza o primeiro bloco de condição
}// ..................................................................................... finaliza o bloco do while


    printf("Ordem Crescente: \n"); // .................................................. exibe uma mensagem
    
    while(y<=i)	{//..................................................................... inicializa o bloco while - enquanto o y for menor ou igual a i execute o laço
       	 if((x[w] >> (y-(32*w))) & 1) { //.............................................. inicializa o bloco condição - se o resultado de (vetor de x crementando 32*w -y) for 1 execute abaixo 
         	 	 printf("%d\n", y); //...................................................... mostra o resultado da variavel y
         	 } //......................................................................... finaliza o bloco if 
       	 y++; //........................................................................ adicione mais 1 no y
       	 w = y / 32; //................................................................. o valor w é igual o valor y dividido por 32
  	  }//............................................................................... finaliza o bloco do while
		printf("\n");//..................................................................... exibe o resultado
     
return 0;  //........................................................................... ou retorne o valor padrão 
} //.................................................................................... finaliza o bloco main (codigo principal)