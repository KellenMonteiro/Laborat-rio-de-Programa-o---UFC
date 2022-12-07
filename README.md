Laboratório de Programação

                 Apresentação:

Códigos referente aos trabalhos 10, 11 e 12 para obtenção de nota da disciplina de Laboratório de Programação (UFC - Campus Russas) ministrado pelo professor Marcio Costa Santos.

* Problema dos trabalhos

    - Trabalho 10: criar um repositório no site GITHUB que contenha o código referente ao problema do trabalho 3, comentado, organizado e com uma apresentação (READ.me) explicando como baixar, compilar e executar o código.

    - TR3: Em anexo está um código em C que deve ser modificado por cada aluno para que o programa em C, que deve fazer o seguinte: ao ser executado, o programa lê inteiros de são digitados pelo usuário (inteiros entre 0 e 5000 apenas). Ao usuário digitar -1, o programa deve imprimir todos os números digitados em ordem (crescente ou decrescente, a escolha dos alunos) e sem as repetições

    - Trabalho 11: criar um repositório no site GITHUB que contenha o código referente ao problema do trabalho 4, comentado, organizado e com uma apresentação (READ.me) explicando como baixar, compilar e executar o código.

    - TR4: Em anexo está um código um arquivo .h que deve ter todas as suas funções implementadas em um arquivo.c. Cada um dos alunos deve implementar todas as funções de acordo com a descrição de seu comportamento presente no arquivo e explicado em sala. A implementação deve ser igual a declaração de cada uma das funções da biblioteca.

    - Trabalho 12: criar um repositório no site GITHUB que contenha o código referente ao problema do trabalho 5, comentado, organizado e com uma apresentação (READ.me) explicando como baixar, compilar e executar o código.

    - TR5: Em anexo está um código um arquivo .h que deve ter todas as suas funções implementadas em um arquivo .c. Cada um dos alunos deve implementar todas as funções de acordo com a descrição de seu comportamento presente no arquivo e explicado em sala. A implementação deve ser igual a declaração de cada uma das funções da biblioteca.
     
              Baixar código:

Para baixar o código é necessário acessar o link a seguir:  https://github.com/KellenMonteiro/Laboratorio-de-Programacao---UFC e clicando na opção code vai aparecer Download ZIP, assim vai baixar em seu computador todas as pastas com os três trabalhos e salve em seu computador. Os arquivos já estão renomeados da seguinte forma: TR3_519324, TR4_519324 e TR5_519324.

            Compilar código:

Com os códigos salvos em disco, podemos compilá-lo. Para isso, temos que abrir o terminal no Linux na pasta em que está o arquivo clique com o botão direito e nas opções clique em abrir terminal. Nesse caso, irá surgir uma tela como a de baixo:
![imagem](https://user-images.githubusercontent.com/110505932/206284953-e4e425e6-d2f5-40e2-9d13-13e458136455.jpg)

Primeiro digitará o nome do arquivo no TR3 será digitado gcc TR3_519324.c –o TR3_519324, assim vai gerar o executável e depois somente digita o nome do executável ./TR3_519324. A saída do programa pode ser vista no terminal.
Para o TR4 será digitado gcc TR4_519324.c main.c -o ordvetor, assim vai gerar o executável e depois somente digita o nome do executável. A saída do programa pode ser vista no terminal.
Para o TR5 será digitado gcc TR5_519324.c main.c -o heap, assim vai gerar o executável e depois somente digita o nome do executável. A saída do programa pode ser vista no terminal.

           Executar código:

Os três programas devem ser executados em um Ubuntu 20.04 e gcc 9.4.
No TR3 na saída do programa será pedido números de 0 a 5000 e quando for digitado – 1 o programa imprime os valores digitados em ordem crescente. No TR4 os números aparecerão de forma ordenada por meio de vetor e no TR5 os números também aparecerão de forma ordenada em forma de heap.
