# Problema [1068 - Balanço de Parênteses I]()


Dada uma expressão qualquer com parênteses, indique se a quantidade de parênteses está correta ou não, sem levar em conta o restante da expressão. Por exemplo:

a+(b*c)-2-a        está correto
(a+b*(2-c)-2+a)*2  está correto

enquanto

(a*b-(2+c)         está incorreto
2*(3-a))           está incorreto
)3+b*(2-c)(        está incorreto

Ou seja, todo parênteses que fecha deve ter um outro parênteses que abre correspondente e não pode haver parênteses que fecha sem um previo parenteses que abre e a quantidade total de parenteses que abre e fecha deve ser igual.

## Entrada
Como entrada, haverá N expressões (1 <= N <= 10000), cada uma delas com até 1000 caracteres.

## Saída
O arquivo de saída deverá ter a quantidade de linhas correspondente ao arquivo de entrada, cada uma delas contendo as palavras correct ou incorrect de acordo com as regras acima fornecidas.


<details>
  <summary>Solução 1:</summary>

A ideia dessa solução é percorrer a string de manter uma contagem de quantos parenteses estão abertos, ao se em algum momento essa contagem for menor que zero então um parenteses foi fechado sem nenhum ter sido aberto para aquele e o loop finaliza. Se algum parenteses foi aberto sem outro ser fechado, então a variavel de contagem vai ser diferente de zero ao final.

Então se alguma dessas condições acontecer, é exibido __incorrect__, caso contrário é exibido __correct__

Então 


</details>