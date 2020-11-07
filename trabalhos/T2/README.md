
# T2 - Números de um texto

## Deadline

Prazo: **16/11/2020 (Seg)** pelo link do GitHub (https://classroom.github.com/a/u09I9YID).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

O objetivo deste T2 é imprimir algumas informações sobre um texto digitado pelo usuário:
- Número de linhas
- Número total de caracteres
- Número de palavras em cada linha
- Número de caracteres em cada linha
O programa fará a leitura do texto da entrada padrão (`std::cin`) e deve formatar a saída no formato abaixo:
```
NumeroDeLinhasTotal NumeroDeCaracteresTotal
NumeroDePalavrasLinha1 NumeroDeCaracteresLinha1
NumeroDePalavrasLinha2 NumeroDeCaracteresLinha2
NumeroDePalavrasLinha3 NumeroDeCaracteresLinha3
....
NumeroDePalavrasLinhaN NumeroDeCaracteresLinhaN
```

Ou seja, você deve calcular o número de palavras e caracteres em cada linha, assim como o total de 
linhas e caracteres somados. Em uma entrada exemplo abaixo:
```
um
dois tres
testando um programa

nada
```
A saída do programa deve ser:
```
$ ./t2
5 35
1 2
2 9
3 20
0 0 
1 4
```
Se preferir, pode testar com arquivos texto maiores de entrada utilizando o redirecionamento de entrada do programa com o comando abaixo:
```
$ ./t2 < entrada.txt
```

## Dicas
- Utilize `std::string` como forma de ler palavras ou linhas do texto.
- Guarde cada linha lida em um `std::vector` de tipo `char*` alocado dinâmicamente.
- Veja como ler uma linha inteira [aqui](../..//aulas/introducao_cxx#entrada-e-saída)
- O código abaixo é um exemplo de como converter `std:string` para `char*`
```c++
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char** argv)
{
    std::string palavra;
    char* vetor;

    std::cin >> palavra; // vai ler apenas uma palavra digitada

    if(palavra.size() > 0){ // testa se palavra nao eh vazia
        vetor = new char[palavra.size() + 1]; // aloca tamanho da palavra mais 1 para `\0' no fim

        strncpy(vetor, palavra.c_str(), palavra.size());  // copia n bytes

        vetor[palavra.size()] = '\0'; // copia '\0' no fim apenas por garantia

        std::cout << "Copiado "  << palavra.size() <<  " bytes no vetor: " << vetor << std::endl;

        delete[] vetor; // libera memoria
    }
    return 0;
}
```

## Regras

- Usar somente C++!
- Obrigatório: `new` e `delete` para alocação dinâmica
- Podem utilizar `std::vector`
- Não compila, zero.
- Plágio, zero.