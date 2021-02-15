
# TE - Calculadora Simplificada

## Deadline

Prazo: **17/02/2021 (Qua)** pelo link do GitHub (https://classroom.github.com/a/dS7zzI4I).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

Este trabalho tem a mesma descrição do [T5](../T5), mas não é solicitado suporte a números em ponto flutuante.

**NOTA** - cada teste TDD vale **1 ponto** na nota deste trabalho.

## Test Driven Development (TDD)

O código-exemplo do trabalho (https://github.com/joao-lima/l2-2020-te) usa o conceito de TDD (*Test Driven Development*) com o framework C++ [Catch2](https://github.com/catchorg/Catch2/tree/v2.x).
O framework Catch2 consegue ser utilizado apenas com o arquivo header `catch.hpp` sem necessidade de instalação.

**NÃO MODIFIQUE OS TESTES**, todos os testes estão prontos no arquivo `calculadora.cpp`. A compilação e teste pode ser feita com os comandos:
```
$ g++ -Wall -std=c++11 -o calc calculadora.cpp 
```

Comentários sobre o exemplo:
- A execução irá mostrar o relatório de testes efetuados.
- Note que o programa não tem uma função `main()` porque não precisa! O Catch2 faz isso para nós
- **Não copie o repositório!** Na hora de criar o seus repostório de entrega, os arquivos estarão disponíveis.

## Dicas
- Pode-se usar `std::stack` ou `std::vector` na calculadora como descrito na  [aula sobre pilhas](../../aulas/06_listas) em C++.


## Regras
- Usar somente C++!
- Use `std::stack` ou `std::vector`
- Não modifique os testes, apenas complete o código da calculadora e tudo será **Success**
- Não compila, zero.
- Plágio, zero.