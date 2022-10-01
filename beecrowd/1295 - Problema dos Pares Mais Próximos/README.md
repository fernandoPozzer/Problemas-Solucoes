# Problema [1295 - Problema dos Pares Mais Próximos]()


Dado um conjunto de pontos em um espaço bidimensional, você deverá encontrar a distância entre os pontos mais próximos.

## Entrada
O arquivo de entrada contém vários casos de teste. Cada caso de teste começa com um número inteiro N (0 ≤ N ≤ 10000), que denota o número de pontos neste conjunto. As N linhas seguintes contêm, cada uma delas, dois valores que são as coordenadas dos N pontos bidimensionais. O primeiro destes dois valores indica a coordenada X e o último indica a coordenada Y. A entrada é terminada por um conjunto cujo N = 0. Esta entrada não deve ser processada. O valor das coordenadas será um número não-negativo menor do que 40000.

## Saída
Para cada conjunto de entrada imprima uma única linha de saída contendo um valor de ponto flutuante (com 4 dígitos após o ponto decimal) o qual denotará a distância entre os dois pontos mais próximos. Se não existirem tais dois pontos na entrada cuja distância for menor do que 10000, imprima a mensagem "INFINITY" sem as aspas.


<details>
  <summary>Solução 1:</summary>

  A ideia dessa solução é colocar todos os pontos em um vetor e ordenar esse vetor por uma posição dos pontos (ou pelo X ou pelo Y) depois ir comparando o ponto que está mais acima com os abaixo dele.

  Depois que já tem todos no vetor ordenado, o objetivo é pegar o ultimo item do vetor, e comparar com os abaixo dele (ou seja, os X menores que ele pois o array está ordenado) sendo as diferenças entre X e o Y devam ser menor que o valor mínimo atual (p1.x-min < p2.x && p1.y-min < p2.y && p1.y+min > p2.y ).
  
  Depois que as condições estão cumpridas, calcular a distancia entre os pontos, e se for menor que o mínimo armazenar na variavel que contém a menor distancia ele a substitui.

  Ao final da verificação do ultimo item com os abaixo dele, ele é removido do vetor e se reinicia o loop novamente com o novo ultimo item do vetor.

  Algumas otimizações feitas no algoritmo:
  - É salvo o valor do mínimo ao quadrado para na comparação não precisar ficar fazendo a raiz quadrada.
  - Sempre que um novo valor mínimo é setado, os limitadores (p1.x-min, p1.y-min,...) são recalculados e salvos em uma varival.
  - A distancia mínima começa em 10.000 pois caso seja maior ou igual a 10.000 deve ser printado INFINITY
  - Ordenação dos pontos pelo eixo X, então eu sempre vou pegar os itens próximos entre si desse eixo, e o outro eu só verifico se está dentro do quadrado, senão dou um continue.


- [Luiz H. Lago](https://github.com/crazynds)

</details>