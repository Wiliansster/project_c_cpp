#include "Livro.h"
#include <cstring>
#include <iostream> // incluir temporariamente

// corpo do construtor padrão
Livro::Livro()
{
    std::cout << "\nIniciando o construtor padrão\n";
    std::cout << "\nFinalizando o construtor padrão\n";
}

//classe :: metodo
Livro::Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[])
{
    std::cout << "\nIniciando construtor parametrizavel\n";

    // mostrar na tela o codigo acessado sem o parametro 'this'
    std::cout << "\nCodigo (parametro): " << codigo;
    std::cout << "\nCodigo (this): " << this->codigo;

    this->codigo = codigo;
    strcpy(this->titulo, titulo);
    strcpy(this->editora, editora);
    this->paginas = paginas;
    strcpy(this->isbn, isbn);

    std::cout << "\nCodigo (this) depois: " << this->codigo;

    std::cout << "\nFinalizando construtor parametrizavel\n";
}

//corpo do metodo destrutor
Livro::~Livro()
{
}
