#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char** argv)
{
    std::string palavra;
    char* vetor;

    std::cin >> palavra; // vai ler apenas uma palavra digitada

    if(palavra.size() > 0){ // testa se palavra nao eh vazia
        vetor = new char[palavra.size() + 1]; // aloca tamanho da palavra mais 1 para `\0'

        strncpy(vetor, palavra.c_str(), palavra.size());  // copia n bytes

        vetor[palavra.size()] = '\0'; // copia '\0' no fim apenas por garantia

        std::cout << "Copiado "  << palavra.size() <<  " bytes no vetor: " << vetor << std::endl;

        delete[] vetor; // libera memoria
    }
    return 0;
}