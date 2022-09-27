# Problema [1165 - Número Primo](https://www.beecrowd.com.br/judge/pt/problems/view/1165)

Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

## Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.

## Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.

<details>
  <summary>Solução 1:</summary>

  Essa solução se baseia em calcular N números primos antes, e depois só verificar se o número informado é primo.

  Alguns conceitos importantes usados que melhoram a velocidade do código:
   - Um número V só é primo se for divisivel por algum primo anterior a ele e menor ou igual a sqrt(V);
   - Computar todos os números primos até a entrada máxima (2^31) é muito custoso, então vou computar todos so numeros primos até o sqrt(2^31), ou seja, até 46340
   - Se o número V informado for menor que 46340, então é feito uma busca binária no array de números primos, se ele for maior, então é feito uma checagem de todos os números primos menores que sqrt(V) do array se o resto é zero ou não.


- [Luiz H. Lago](https://github.com/crazynds)

</details>