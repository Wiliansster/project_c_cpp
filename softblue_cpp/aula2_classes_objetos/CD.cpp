#include "CD.h"
#include <cstring>
#include <iostream>

//corpo do construtor padrão
CD::CD()
{
}

//corpo do construtor customizado
CD::CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned duracao, unsigned int faixas)
{
    this->codigo = codigo;
    strcpy(this->titulo, titulo);
    this->discos = discos;
    this->duracao = duracao;
    this->faixas = faixas;
}

// corpo do desconstrutor
CD::~CD()
{
}