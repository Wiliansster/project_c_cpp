#include "Revista.h"
#include <string>

Revista::Revista()
{

}

Revista::Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes)
{
	this->codigo = codigo;
	strncpy(this->titulo, titulo, sizeof(this->titulo));
	strncpy(this->editora, editora, sizeof(this->editora));
	this->paginas = paginas;
	this->ano = ano;
	this->mes = mes;
}

Revista::~Revista()
{

}

