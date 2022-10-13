# Problema [1912 - Ajude Seu Madruga](https://www.beecrowd.com.br/judge/pt/problems/view/1912)


O problema é uma clássica do método da bisecção, do paradigma divisão e conquista.
Primeiro eu verifico os casos externos, onde não precisamos cortar ou é impossível alcançar a área desejada.
Feito essa verificação, pego o tamanho da maior tira do array (para maiores otimizações, poderia fazer junto das operações de soma uma espécie de análise dos dados, obtendo o desvio padrão e reduzindo a partir dessa taxa o limiar alto para o método da bisecção) como limiar alto para o início do loop. limiar baixo é 0, a partir disso, computo conforme o paradigma divisão e conquista para se aproximar cada vez mais do resultado. Não utilizei uma verificação se a diferença de cada iteração é menor do que um certo número (1e-9 por exemplo) para finalizar pois não vale o risco em cair num loop infinito. Portanto, fiz o loop iterar fixamente 35 vezes, pois julguei que deu os resultados mais consistentes. Um valor próximo deste é adequado para a maioria dos casos, pois este método rápidamente converge ao resultado mesmo com entradas muito maiores.
