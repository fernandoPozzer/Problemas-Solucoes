# Problema [1232 - Ciclo de Rubik](https://www.beecrowd.com.br/judge/pt/problems/view/1232)

Provavelmente todos conhecem o Cubo de Rubik, um passatempo 3-D desafiador, que tem cada uma das seis faces cobertas com nove etiquetas, cada etiqueta de uma cor (azul, amarelo, laranja, branco, verde e vermelho). No estado inicial, todas as nove etiquetas de uma face têm a mesma cor. Um mecanismo engenhoso permite que cada face seja rotacionada independentemente, fazendo com que as cores das etiquetas nas faces possam ser misturadas.

Cada uma das faces do Cubo de Rubik é denotada por uma letra: F, B, U, D, L, e R, como ilustrado na figura abaixo.

![imagem](./UOJ_1232.webp)


U F D R L B A rotação de uma face é denominada de um movimento. Para descrever os movimentos utilizamos as letras identificadoras das faces:

uma letra maiúscula representa um giro de 90o no sentido horário da face correspondente;
uma letra minúscula representa um giro de 90o no sentido anti-horário da face correspondente.

Por exemplo, F representa um giro de 90o no sentido horário da face F; r representa um giro de 90o no sentido anti-horário da face R. Uma sequência de movimentos é denotada por uma sequência de letras identificadoras de faces. Assim, rDF representa um giro de 90o no sentido anti-horário da face R, seguido de um giro de 90o no sentido horário da face D, seguido de um giro de 90o no sentido horário da face F.

Uma propriedade interessante do Cubo de Rubik é que qualquer sequência de movimentos, se aplicada repetidas vezes, faz com que o cubo retorne ao estado original (estado que tinha antes da primeira aplicação da sequência). Por exemplo, após quatro aplicações da sequência B o cubo retorna ao estado original.

Você deve escrever um programa que, dada uma sequência de movimentos, determine o menor número de aplicações completas dessa sequência para que o cubo retorne ao seu estado original.

### Entrada
Cada caso de teste é descrito em uma única linha, que contém a sequência de movimentos. Obs: Cada sequência tem no mínimo um movimento e no máximo 80 movimentos.

### Saída
Para cada caso de teste seu programa deve imprimir uma única linha, contendo um único inteiro, indicando o menor número de aplicações completas da sequência para que o cubo retorne ao seu estado original.

<details>
    <summary>Solução 1</summary>

A ideia dessa solução é por tentativa na força bruta, ou seja, é necessário fazer o movimento dado como input N vezes até chegar na configuração inicial e então printar esse N como a resposta. 
A maneira mais rápida de implementar a movimentação é criar um array no qual contém posições de todas as cores das faces, e atribuir a cada casa uma posição de face conforme a imagem abaixo:

![imagem](./cuborep.png)

E após isso implementar uma função para cada movimentação, onde em cada função ele especifica a movimentação das casas conforme necessário. Um exemplo de função que implementa movimentação da face F é mostrado abaixo:

```C++
void rota4(char *s,int a,int b,int c, int d){
    char t = s[a];
    s[a] = s[b];
    s[b] = s[c];
    s[c] = s[d];
    s[d] = t;
}

void rotacionaF(char* c){
    rota4(c,0,6,8,2);
    rota4(c,1,3,7,5);

    rota4(c->pos,33,26,38,9);
    rota4(c->pos,34,23,37,12);
    rota4(c->pos,35,20,36,15);
}
```
Outro ponto interessante é que não é necessário implementar a rotação reversa, no caso é só executar a rotação normal 3 vezes que o resultado vai ser o mesmo da rotação reversa. 


- [Luiz H. Lago](https://github.com/crazynds)

</details>