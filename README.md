Curso de Maratona de programação: Algoritmos para sua primeira competição
---------
<img src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" data-canonical-src="https://www.alura.com.br/assets/api/cursos/maratona-de-programacao.svg" width="250" height="250" />

https://cursos.alura.com.br/course/maratona-de-programacao

## Temas abordados
* Começando o treinamento
* Ordenação
* Recursão
* Busca binária
* Introdução à Programação dinâmica


## Torres de Hanói
OBIHANOI - Torres de Hanói

https://br.spoj.com/problems/OBIHANOI/

O quebra-cabeças Torres de Hanoi é muito antigo e conhecido, sendo constituído de um conjunto de N discos de tamanhos diferentes e três pinos verticais, nos quais os discos podem ser encaixados.


Image: https://www.spoj.com/content/wanderley:OBIHANOI.png

<img src="https://www.spoj.com/content/wanderley:OBIHANOI.png" data-canonical-src="https://www.spoj.com/content/wanderley:OBIHANOI.png" width="344" height="78" />


Cada pino pode conter uma pilha com qualquer número de discos, desde que cada disco não seja colocado acima de outro disco de menor tamanho. A configuração inicial consiste de todos os discos no pino 1. O objetivo do quebra-cabeças é mover todos os discos para um dos outros pinos, sempre obedecendo à restrição de não colocar um disco sobre outro menor.

Um algoritmo para resolver este problema é o seguinte.

```
procedimento Hanoi(N, Orig, Dest, Temp)
   se N = 1 então
      mover o menor disco do pino Orig para o pino Dest;
   senão
      Hanoi(N-1, Orig, Temp, Dest);
      mover o N-ésimo menor disco do pino Orig para o pino Dest;
      Hanoi(N-1, Temp, Dest, Orig);
   fim-se
fim
```

**Tarefa**
Sua tarefa é escrever um programa que determine quantos movimentos de trocar um disco de um pino para outro serão executados pelo algoritmo acima para resolver o quebra-cabeça.


**Entrada**

A entrada possui vários conjuntos de teste. Cada conjunto de teste é composto por uma única linha, que contém um único número inteiro N (**0 <= N <= 30**), indicando o número de discos. O final da entrada é indicado por **N = 0**.


**Saída**

Para cada conjunto de teste, o seu programa deve escrever três linhas na saída. A primeira linha deve conter um identificador do conjunto de teste, no formato “Teste n”, onde n é numerado seqüencialmente a partir de 1. A segunda linha deve conter o número de movimentos que são executados pelo algoritmo dado para resolver o problema das Torres de Hanói com N discos. A terceira linha deve ser deixada em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.


**Restrições**

> **0 ≤ N ≤ 30** (N = 0 apenas para indicar o final da entrada)


**Exemplos**

```
Entrada:
1
2
0

Saída
Teste 1
1

Teste 2
3
````
