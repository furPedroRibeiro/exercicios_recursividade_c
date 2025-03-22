# Exercício 3

Passo a passo:

* Verifica se o vetor 1 é maior que o vetor 2, e vice-versa.
* * Se um dos vetores for maior que o outro, ele chama a função diminuindo o índice do vetor maior de 1 em 1 até que a diferença entre os índices seja == 0;
* * Quando a diferença entre eles é 0 e o índice do v1 é ainda !0, a função é chamada diminuindo o índice dos 2 vetores até que chegue em 0. Depois que ambos chegam em 0, o índice do vetor resultante também é zerado, e v3[0] = v1[0] e v3[1] = v2[0];
* * Depois que isso acontece, a recursão é colocada em prática voltando e executando o resto de todas as funções deixadas para trás. O índice de v3 é retornado sempre de 2 em 2, enquanto ainda temos que os índices dos vetores v1 e v2 iguais. 
* * Quando o índice de v1 ou v2 é maior do que o outro, as funções que descresceram esse índice são acionadas e é feita a operação v3[índice] = v1[índice] ou vice-versa e o v3 vai tendo o índice retornado de 1 em 1 agora, para adicionar os elementos do vetor maior que ainda faltam.
* * No caso dos vetores serem iguais, ele entra direto na comparação size_vec_1!=0 e volta de 2 em 2

## Exemplo:

Quando temos um vetor com tamanho 3 e outro com tamanho 2, temos índices indo de 0 a 2 e 0 a 1 respectivamente.

Na primeira iteração, verificamos que elementos_v1 > elementos_v2; chamamos a função novamente dessa vez passando elementos_v1-1 e isso ocorre até que índice de v1 seja igual ao de v2, ou seja, a diferença entre os índices seja 0; no nosso caso isso acontece com 1 iteração, e depois ele já cai no if(elementos_v1!=0), o que significa que enquanto ambos não chegarem no índice 0 (a cada vez que a função é chamada enquanto eles são diferentes de 0, ela é chamada passando o índice-1 de v1 e v2, para que cheguem ao 0), ele chamará a função; quando ambos chegam no 0, fazemos v3[0] = v1[0] e v3[1] = v2[0]. Retornamos o índice de v3 como 2 e após isso a função fará v3[2] = v1[1] e v3[3] = v2[1]; depois que isso é feito retornamos índice_v3+1, e fazemos v3[4] = v1[2] e retornamos para o app já tendo o nosso vetor intercalado pronto. 