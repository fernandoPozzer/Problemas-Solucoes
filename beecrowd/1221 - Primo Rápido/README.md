# Problema [1221 - Primo Rápido](https://www.beecrowd.com.br/judge/pt/problems/view/1221)

Mariazinha sabe que um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7 sem que haja resto. Então ela pediu para você fazer um programa que aceite diversos valores e diga se cada um destes valores é primo ou não. Acontece que a paciência não é uma das virtudes de Mariazinha, portanto ela quer que a execução de todos os casos de teste que ela selecionar (instâncias) aconteçam no tempo máximo de um segundo, pois ela odeia esperar.

## Entrada
A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 200), correspondente ao número de casos de teste. Seguem N linhas, cada uma contendo um valor inteiro X (1 < X < 2^31) que pode ser ou não, um número primo.

## Saída
Para cada caso de teste imprima a mensagem “Prime” (Primo) ou “Not Prime” (Não Primo), de acordo com o exemplo abaixo.

<details>
  <summary>Solução 1:</summary>

  Essa solução se baseia em calcular N números primos antes, e depois só verificar se o número informado é primo.

  Alguns conceitos importantes usados que melhoram a velocidade do código:
   - Um número V só é primo se for divisivel por algum primo anterior a ele e menor ou igual a sqrt(V);
   - Computar todos os números primos até a entrada máxima (2^31) é muito custoso, então vou computar todos so numeros primos até o sqrt(2^31), ou seja, até 46340
   - Se o número V informado for menor que 46340, então é feito uma busca binária no array de números primos, se ele for maior, então é feito uma checagem de todos os números primos menores que sqrt(V) do array se o resto é zero ou não.


- [Luiz H. Lago](https://github.com/crazynds)
</details>