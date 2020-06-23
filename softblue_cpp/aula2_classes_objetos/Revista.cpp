#include "Revista.h"
#include <cstring>
#include <iostream> 

//corpo do construtor padrão
Revista::Revista()
{
}

//classe :: metodo
Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes)
{
    this ->codigo = codigo;
    strcpy(this ->titulo,titulo);
    strcpy(this ->editora, editora);
    this ->paginas = paginas;
    this ->ano = ano;
    this ->mes = mes;
}

//corpo do metodo destrutor
Revista::~Revista()
{
}