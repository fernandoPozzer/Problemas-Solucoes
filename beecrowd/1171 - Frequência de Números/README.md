# Problema [1068 - Balanço de Parênteses I](https://www.beecrowd.com.br/judge/pt/problems/view/1068)

Neste problema sua tarefa será ler vários números e em seguida dizer quantas vezes cada número aparece na entrada de dados, ou seja, deve-se escrever cada um dos valores distintos que aparecem na entrada por ordem crescente de valor.

### Entrada
A entrada contém apenas 1 caso de teste. A primeira linha de entrada contem um único inteiro N, que indica a quantidade de valores que serão lidos para X (1 ≤ X ≤ 2000) logo em seguida. Com certeza cada número não aparecerá mais do que 20 vezes na entrada de dados.

### Saída
Imprima a saída de acordo com o exemplo fornecido abaixo, indicando quantas vezes cada um deles aparece na entrada por ordem crescente de valor.

<details>
  <summary>Solução 1:</summary>


Como o range de numeros que vai ter no input é pequeno, a ideia dessa solução é criar um array 2000 casas, sendo cada casa armazenar a quantidade de números que aparecer o numero relativo a posição daquela casa.

Após ler todos os numeros e incrementar na casa equivalente, é percorrido o array e buscando cassas que o numero é maior que zero, então é printado na tela.


</details>