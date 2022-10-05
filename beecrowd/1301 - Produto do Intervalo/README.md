# Problema [1301 - Produto do Intervalo]()

https://www.beecrowd.com.br/judge/pt/problems/view/1301

# esse é um problema bem chatinho por conta do tempo limite.

a solução consiste em utilizar uma árvore segmentada para reduzir o custo computacional de responder a cada uma das respostas. é uma árvore que guarda um booleano, e como é uma multiplicação, se houver um 0 dentro o total dela será sempre 0. então criei um map em c++ para evitar de gastar computacionalmente recursos quando encontrar que um 0 está entre os números para multiplicar, é utilizado busca binária para acelerar este processo, pois o map está ordenado. poderia se utilizar bitset para reduzir bem mais a memória, para casos onde a entrada for maior.

a multiplicação não se pode fazer com números por conta do estouro, pois os números são gigantescos. então, simbolizei o + como 0 e - como 1. portanto uma operação XOR fornece a mesma lógica. ++ dá + e -- dá +.

a implementação da árvore foi retirada e adaptada no site https://cp-algorithms.com/data_structures/segment_tree.html
ainda é possível otimizar as inserções, mas não fui além, pois a utilização da árvore segmentada reduziu de 20 segundos para .210s, quando antes eu havia uma implementação que fazia XOR com gasto computacional desnecessário.

recomendo a todos ler o material presente no site acima.
