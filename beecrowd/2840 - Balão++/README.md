# Problema [2840 - Balão++](https://www.beecrowd.com.br/judge/pt/problems/view/2840)


Espero que você esteja curtindo a competição :D.

Nós, os autores (Diego Rangel, Francisco Arcos, Gabriel Duarte e Gustavo Policarpo), estamos felizes por você estar tentando resolver nossos problemas. Para você que é iniciante não sair da sala sem nenhum balão, aqui vai um desafio para você:

 - Neste ano os balões têm formato esférico, segundo a empresa que produz os balões: "(...) por motivos complexos de engenharia esse formato é melhor (...)" vai entender...
 - Entretanto esse formato faz com que o balão use mais gás hélio e isso causou um problema, pois o organizador já havia comprado um tanque com L litros de gás antes dessa novidade no mercado de balões.
Sabendo o raio do modelo de balões e a quantidade de gás hélio disponível, você poderia ajudar a equipe dizendo quantos balões podem ser enchidos completamente?

## Entrada
A entrada é composta por dois inteiros R e L (1 ≤  R, L ≤ 109), que são o raio e a quantidade de gás disponível, respectivamente. 

**Considere PI = 3.1415**

## Saída
Você deve imprimir um único inteiro representando a quantidade de balões que podem ser enchidos completamente com a quantidade de gás hélio disponível.

<details>
  <summary>Solução 1:</summary>


  Basicamente aplicar a formula do volume de esfera abaixo:
  ![formula](http://www.sciweavers.org/tex2img.php?eq=%5Cfrac%7B4%7D%7B3%7D%20%2AR%5E%7B3%7D%2API%20&bc=White&fc=Black&im=jpg&fs=12&ff=arev&edit=0)

  E com isso se tem o volume de gas helio que cada balão vai precisar, então após é só dividir a quantidade máxima pelo volume de cada balão e arredondar para baixo que se tem a quantidade de balões que pode se encher completamente.

  
- [Luiz H. Lago](https://github.com/crazynds)

</details>