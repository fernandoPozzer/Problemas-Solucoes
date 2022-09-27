# Problema [2091 - Lonely Number](https://www.beecrowd.com.br/judge/pt/problems/view/2091)

Será dado a você um vetor com N números, onde todos estarão em pares. Porém um desses números acabou
ficando sem par, você consegue identificar qual é esse número ?

Por exemplo, A = {1, 1, 3, 3, 5, 5, 5}, o número que ficou sozinho foi o 5.

### Entrada
A entrada é composta por vários casos de teste. Cada caso de teste é composto por uma linha contendo um inteiro N (1 ≤ N < 10^5), seguida por N números A (0 ≤ A ≤ 10^12). A entrada termina quando N = 0 e não deve ser processada.

### Saída
Para cada caso de teste imprima apenas o número que ficou sozinho. É garantido que apenas um número está sozinho.

<details>
  <summary>Solução 1:</summary>

Uma forma simples é criando um array (bucket) onde o valor de cada entrada é usado
como índice dentro do array de bucket. O array guarda o número de ocorrências de cada entrada.

Nesta solução, o tamanho do array deve ser igual ao maior valor a ser processado + 1. Por exemplo,
se o maior valor for 1.000, deve-se criar um bucket com 1.001 posições, visto que na linguagem C o
índice inicia em 0.

Para a seguinte entrada, onde A=4 o maior valor, o bucket teria a seguinte configuração:
 - Entrada: 1, 1, 2, 1, 2, 2, 2, 4, 4.
 - Bucket: [0, 3, 4, 0, 2], indicando que o valor 0 tem 0 ocorrências, o valor 1 com 3 ocorrências,
o valor 2 com 4 ocorrências, o valor 3 com 0 ocorrências e o valor 4 com duas ocorrências.

Este algoritmo tem complexidade O(1) para fazer a inserção de um elemento no bucket, e
complexidade O(A) para encontrar o lonely number.

Pelo enunciado do problema temos (1≤ A ≤10^12), ou seja, deve-se alocar um array com
1,000,000,000,001 elementos, ou seja, 1 TB de memória. A maioria deste espaço não vai ser
utilizada pois a entrada tem apenas 100.000 elementos.

</details>
<details>
    <summary>Solução 2</summary>

Pode-se também guardar os valores em um array de tamanho N de forma sequencial e
então fazer buscas O(N) para descobrir se existem número impar de elementos. Esta solução pode
ocasionar um Time limit exceeded.

```C++
#include <iostream>
using namespace std;
bool verifica(long long *vetor, int idx, int N)
{
    for(int i=idx+1; i<N; i++)
    {
        if(vetor[idx]==vetor[i])
        {
            vetor[idx]=0;
            vetor[i]=0;
            return 1;
        }
    }
    return 0;
}
int main(){
    long long N,A;
    cin>>N;
    long long vetor[N];
    for(int i=0;i<N;i++)
    {
        cin >> vetor[i];
    }
    for(int i=0; i<N; i++)
    {
        if(vetor[i]!=0)
        {
            if(!verifica(vetor,i,N))
            {
                cout<<vetor[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
```

Pode-se também fazer a ordenação do vetor antes de fazer a busca.

```C++
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long arr[100000];
    while(true){
        cin >> n;
        if(n==0)
            break;
        for(int x=0;x<n;x++){
            cin >> arr[x];
        }
        // sort array;
        sort(arr, arr+n);
        for(int x=0; x<n; x+=2){
            if(arr[x]!=arr[x+1]){
                cout << arr[x] << endl;
                break;
            }
        }
    }
    return 0;
}
```

- [Luiz H. Lago](https://github.com/crazynds)
</details>
<details>
    <summary>Solução 3</summary>

Uma solução mais eficiente (que não utiliza tanta memória em relação a primeira
solução) consiste em usar uma estrutura <map> da linguagem C++, que não necessita prealocar um
array com (A+1) elementos. São alocados apenas os elementos utilizados. A estrutura map faz uso
de uma tupla <chave, valor>. Entretanto, ela gasta O(log N) para fazer a inserção de um valor no
map (faz uso de uma busca binária).

```C++
#include <map>
#include <iostream>
using namespace std;
int main()
{
    unsigned long long val;
    int num = 0;
    while(1)
    {
        map<unsigned long long, int> arr;
        map<unsigned long long, int>::iterator it;
        scanf("%llu", &num);
        if( num == 0 )
            break;
        for( int i = 0; i < num; i++ )
        {
            scanf("%llu", &val);
            arr[val] ++;
        }
        for(it=arr.begin(); it!=arr.end(); ++it)
        {
            if( it->second % 2 == 1 )
            {
                cout << it->first << '\n';
                break;
            }
        }
    }
}
```

</details>
<details>
    <summary>Solução 4</summary>

Faz uso de operações bitwise, com o operador XOR. Para cada entrada, faz-se um
XOR com o valor corrente. Um número par de bits 1 se anula. Faz inserção em tempo O(1) e
localização do lonely number também em O(1). Considere a entrada do exemplo acima:


```
val = 0;
val= val ^ 1 => 1 (0001)
val= val ^ 1 => 0
val= val ^ 2 => 2 (0010)
val= val ^ 1 => 3
val= val ^ 2 => 1
val= val ^ 2 => 3
val= val ^ 2 => 1
val= val ^ 4 => 5 (0100)
val= val ^ 4 => 1
```

Ao final, o valor 1 indica que o número 1 não tem o seu par.

```C++
int main() {
    size_t n = 0;
    while(1)
    {
        cin >> n;
        if (n <= 0) break;
        long long in, ans = 0;
        for (size_t i = 0; i < n; ++i) {
            cin >> in;
            ans ^= in;
        }
        cout << ans << endl;
    }
    return 0;
}
```

</details>