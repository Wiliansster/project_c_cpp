#include "DVD.h"
#include <cstring>
#include <iostream>

//corpo do construtor padrão
DVD::DVD()
{
}

//corpo do construtor customizado
DVD::DVD(unsigned int codigo, char titulo[],unsigned int discos, unsigned int duracao, unsigned int regiao, char legendas[])
{
    this->codigo = codigo;
    strcpy(this->titulo, titulo);
    this->discos = discos;
    this->duracao = duracao;
    this->regiao = regiao;
    strcpy(this->legendas, legendas);
}

// corpo do desconstrutor
DVD::~DVD()
{
}
