#include "Dvd.h"
#include <string>

Dvd::Dvd()
{

}

Dvd::Dvd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, char legendas[], unsigned int regiao)
{
	this->codigo = codigo;
	strncpy(this->titulo, titulo, sizeof(this->titulo));
	this->discos = discos;
	this->duracao = duracao;
	strncpy(this->legendas, legendas, sizeof(this->legendas));
	this->regiao = regiao;
}

Dvd::~Dvd()
{

}

