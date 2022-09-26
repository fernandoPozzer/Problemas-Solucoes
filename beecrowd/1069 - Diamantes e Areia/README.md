# Problema [1069 - Diamantes e Areia](https://www.beecrowd.com.br/judge/pt/problems/view/1069)

João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>". Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão se formar. Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados. O primeiro é retirado de <..>, resultando  .<...<>....>....>>>. Em seguida o segundo diamante é retirado, restando .<.......>....>>>. O terceiro diamante é então retirado, restando no final .....>>>., sem possibilidade de extração de novo diamante.

## Entrada
Deve ser lido um valor inteiro N que representa a quantidade de casos de teste. Cada linha a seguir é um caso de teste que contém até 1000 caracteres, incluindo "<,>, ."

## Saída
Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.


<details>
  <summary>Solução 1:</summary>


  A solução para esse problema envolve manter uma contagem de '<' abertos, e sempre que tem um fechamento ('>') é decrementado a contagem, e incrementado o numero de diamantes. Se a contagem for zero e encontrar um fechamento, então não é decrementado e nem incrementado numero de diamante. 


</details>