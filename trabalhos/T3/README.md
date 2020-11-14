
# T3 - Embaralhando caracteres

## Deadline

Prazo: **23/11/2020 (Seg)** pelo link do GitHub (https://classroom.github.com/a/GHxOz5vq).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

Imaginem que recebemos um arquivo texto com várias linhas onde cada linha é uma chave hash [MD5](https://pt.wikipedia.org/wiki/MD5). Porém o arquivo de entrada também está codificado com os caracteres adicionas: `<`, `>`, `^`, `@`. Cada símbolo significa:
- `<` o cursor deve ser posicionado no começo da linha atual para continuar
- `>` o cursor deve ser posisionado no fim da linha atual para continuar
- `^` as linhas devem ser inseridas a partir da primeira linha, incluindo a atual. Nem todas as linhas tem este símbolo
- `@` as linhas devem ser inseridas a partir da última linha, incluindo a atual. Nem todas as linhas tem este símbolo


O objetivo deste T3 é decodificar o arquivo de entrada e imprimir as chaves hash sem a codificação.
O programa fará a leitura do texto da entrada padrão (`std::cin`) e deve  imprimir o resultado na saída padrão (`std::cout`).

Um exemplo de entrada:
```
cf8<aa
5b41@>5
>10a^18
0923a3
```
A saída do programa deve ser:
```
$ ./t3
10a18
0923a3
aacf8
5b415
```
Se preferir, pode testar com arquivos texto maiores de entrada utilizando o redirecionamento de entrada do programa com o comando abaixo:
```
$ ./t3 < exemplo.txt
```

## Dicas
- O segredo para "mover" o cursor é usar listas! As listas tem tempo de inserção e remoção constantes `O(1)` mas podem ter desempenho ruim em buscas `O(n)`. Olhe os exemplos da [aula sobre listas](../../aulas/06_listas) em C++.
- Cada linha será uma lista de caracteres inserida um por um. As linhas do texto também devem ser uma lista de linhas.

## Regras

- Usar somente C++!
- Obrigatório: `std::list` 
- Evite`std::vector`
- Não compila, zero.
- Plágio, zero.