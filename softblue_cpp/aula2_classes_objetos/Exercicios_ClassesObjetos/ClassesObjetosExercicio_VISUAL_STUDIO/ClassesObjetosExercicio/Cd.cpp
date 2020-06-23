#include "Cd.h"
#include <string>

Cd::Cd()
{

}

Cd::Cd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas)
{
	this->codigo = codigo;
	strncpy(this->titulo, titulo, sizeof(this->titulo));
	this->discos = discos;
	this->duracao = duracao;
	this->faixas = faixas;
}

Cd::~Cd()
{

}
