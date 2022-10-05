# Problema [1084 - Apagando e Ganhando](https://www.beecrowd.com.br/judge/pt/problems/view/1084)

Juliano é fã do programa de auditório Apagando e Ganhando, um programa no qual os participantes são selecionados através de um sorteio e recebem prêmios em dinheiro por participarem.

No programa, o apresentador escreve um número de N dígitos em uma lousa. O participante então deve apagar exatamente D dígitos do número que está na lousa; o número formado pelos dígitos que restaram é então o prêmio do participante.

Juliano finalmente foi selecionado para participar do programa, e pediu que você escrevesse um programa que, dados o número que o apresentador escreveu na lousa, e quantos dígitos Juliano tem que apagar, determina o valor do maior prêmio que Juliano pode ganhar.

## Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém dois inteiros N e D (1 ≤ D < N ≤ 105), indicando a quantidade de dígitos do número que o apresentador escreveu na lousa e quantos dígitos devem ser apagados. A linha seguinte contém o número escrito pelo apresentador, que não contém zeros à esquerda.

O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.

## Saída
Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo o maior prêmio que Juliano pode ganhar.

<details>
  <summary>Solução 1:</summary>

  Algumas coisas é possivel tirar como verdade do exercício, uma delas é o seguinte:

      Se eu preciso remover N casas de um numero com M digitos, pelo menos uma das N+1 primeiras casas não vai ser removida. E então repete o ciclo até remover todas as N casas.

  Com essa ideia em mente, fiz um algoritmo que pega as N+1 primeiras casas da string, e seleciona a primeira casa que tem o maior número, salva ela, e então remove todas as casas a frente dela. Após isso ele chama recursivamente o algoritmo novamente para a substring da casa depois do número que eu selecionei até o fim, e com a quanitdade de digitos que falta a remover.

  Quando não tiver mais casas para remover, salva o restante da string. Ou quando o número de casas para remover é igual ao restante da string, descarta todas as casas da string.


  Por si só, essa é a idea para compreender como resolver esse problema, mas esse algoritmo não é o suficiente, pois para cada casa a ser printada, ela tem q verificar as N+1 casas próximas e isso resultaria em um timelimit.

  O algoritmo que soluciona esse problema é uma adaptação do explicado acima com apenas uma leitura no array e utilizando pilhas. Envolve em ler cada casa isoladamente, e ir armazenando na pilha, e no momento que a casa lida é maior que a casa no topo do array, descarta a casa do topo, e verifica denovo. Quando a posição que tu tiver lendo for N+1 de distancia da ultima casa que foi salva, então remove o elemento na posição zero da pila, e define aquela posição como a ultima que foi salva, e continua a executar o algoritmo.

  É meio complicado e entender, mas a idéia é a mesma que o algoritmo inicialmente explicado, porém adaptado para apenas uma varredura no array com uma pilha e ir removendo da pilha conforme ele atinge o N+1 de distancia.



</details>