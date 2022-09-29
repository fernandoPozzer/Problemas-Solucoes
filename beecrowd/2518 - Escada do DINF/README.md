# Problema [2518 - Escada do DINF](https://www.beecrowd.com.br/judge/pt/problems/view/2518)



O prédio do Departamento de Ilhas Naturais Federais (DINF) está passando por uma reforma para deixá-lo mais acessível. No prédio há uma escada de N degraus. Cada degrau tem H centímetros de altura, C centímetros de comprimento e L centímetros de largura. A figura (a) exemplifica uma escada com N=4 degraus.

![eximagem](./UOJ_2518.webp)

Para tornar o prédio mais acessível, o chefe do DINF decidiu colocar uma rampa sobre a escada. A rampa é rígida e tem forma retangular. Ela será colocada sobre a escada de forma a cobrir todos os seus degraus, como indicado pela figura (b).

Sua tarefa é, dado o número de degraus e suas medidas, determinar qual deve ser área total da superfície da rampa.

## Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso contém um inteiro N (1 ≤ N ≤ 1000), o número de degraus na escada. A segunda linha contém três inteiros H, C e L (1 ≤ H, C, L ≤ 100), as medidas de cada degrau, em centímetros.

A entrada termina com fim-de-arquivo (EOF).

## Saída
Para cada caso de teste, imprima uma linha contendo a área total da superfície da rampa, em metros quadrados. Arredonde e imprima este valor com exatamente 4 casas decimais.



<details>
  <summary>Solução 1:</summary>

  Esse exercício ele pede para descobrir a superfície da parte superior da rampa apenas, então eu converti todos os inputs para metros já no inicio do calculo para evitar erro de precisão (que estava dando quando eu convertia no final) e fiz o calculo da hipotenusa dos degraus, e ao final multipliquei pela quantidade de degraus para ter o valor do lado da superficie da rampa. Multiplicando com o valor da largura da rampa tive a resposta que foi printada usando printf (%.4f).

  Para evitar erros de precisão foi utilizar todas as variaveis como double.

  
- [Luiz H. Lago](https://github.com/crazynds)

</details>