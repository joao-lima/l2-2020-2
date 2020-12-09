
# T5 - Calculadora 

## Deadline

Prazo: **23/12/2020 (Qua)** pelo link do GitHub (https://classroom.github.com/a/RDqTMCTD).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

Este trabalho consiste na implementação de uma **calculadora** genérica com [templates C++](../../aulas/introducao_cxx#templates). 
A calculadora deve suportar operações em `int` e `float` por meio de templates. Para tanto, é preciso completar as funções do arquivo `calculadora.cpp` disponível na criação de seu repositório de trabalho.

A calculadora tem duas pilhas, uma de operadores e outra de
operandos. Um operando é sempre colocado na pilha de operandos. Um
operador, antes de ser colocado na pilha de operadores, verifica o
operador no topo e, caso o operador tenha maior precedência, opera-o
sobre os dois operandos do topo e coloca o resultado no topo da pilha
de operandos, até que a pilha esteja vazia ou que o operador do topo
seja um abre-parênteses. O fecha parênteses opera todos os operadores
do topo até encontrar um abre parênteses. O método `fim()` opera todos
os operadores até esvaziar a pilha de operadores.


As três regras básicas para resolução da calculadora são:
1. Para cada operador, 2 operandos devem existir.
2. Se encontrar `)` resolve tudo até encontrar o `(` correspondente.
3. Se o operador do topo da pilha tem maior precedência que o atual (a
   ser empilhado), resolve a pilha até não haver mais operadores com
   maior precedência.

Um exemplo da expressão `3/2+1`:
1. empilha `3`.
2. empilha `'/'`.
3. empilha `2`.
4. antes de empilha `'+ '` verifica-se que `'/'` tem precedência sobre `'+'`
   e se calcula todos os operadores da pilha `(3/2)`, sendo o resultado
   empilhado na pilha de operandos (`1.5`). Após, empilha `'+'`.
5. empilha `1`.
6. termina o cálculo (`1.5+1`).

A estrutura template de exemplo usada é essa:
```C++
template<typename T>
struct Calculadora {

    // ver http://en.cppreference.com/w/cpp/container/stack
    std::stack<T> operandos;    // números, basicamente
    std::stack<char> operadores; // operadores: +, -, /, *
    // podem incluir mais dados, se necessário

    // cria a calculadora
    void cria(void){
    }

    // destroi a calculadora, limpa as pilhas
    void destroi(void){
        while(operandos.empty() == false)
            operandos.pop();
        while(operadores.empty() == false)
            operadores.pop();
    }

    // insere um novo operando para o calculo
    void operando(T op) {
        operandos.push(op);
    }

    // insere um novo operador para o calculo (pode ser '+', '-', '*', '/', '**')
    // se for um abre parenteses '(' tudo ok. 
    // se for um fecha parenteses ')', deve-se calcular tudo dentro.
    void operador(char op){
        // verficar aqui o operador inserido
        operadores.push(op);
    }

    // recebe uma formula in-fixa como entrada e coloca nas pilhas
    void formula(std::string form){

    }

    // finaliza o calculo e verifica erros.
    // retorna false se erro detectado
    bool fim(void) {
        if(operandos.empty())
            return false;

        return true;
    }

    // retorna o resultado calculo (topo da pilha de operandos)
    // esse resultado sera parcial se ainda nao foi chamado calc_fim().
    T resultado(void) {
        if(operandos.empty())
            return static_cast<T>(0);

        return operandos.top();
    }
};
```

As funções que **devem** ser completadas são:
- `cria()` inicia a calculadora (se precisar)
- `destroi()` limpa as pilhas 
- `operando()` empilha um operando tipo `T` 
- `operador()` empilha um operador tipo `char`
- `formula()` recebe um `std::string` e empilha os operadores e operandos 
- `fim()` resolve tudo que esta nas pilhas e retorna `true` se, e somente se, restar apenas 1 operando nas pilhas ou retorna `false` caso contrário
- `resultado()` retorna o resultado calculado

## Test Driven Development (TDD)

O código-exemplo do trabalho (https://github.com/joao-lima/l2-2020-t5) usa o conceito de TDD (*Test Driven Development*) com o framework C++ [Catch2](https://github.com/catchorg/Catch2/tree/v2.x).
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