#include "Relogio.h"
#include <iostream>
using namespace std;

Relogio::Relogio(int pHoras, int pMinutos, int pSegundos)
{
	this->horas = pHoras;
	this->minutos = pMinutos;
	this->segundos = pSegundos;
}

void Relogio::exibirHoras()
{
	cout << "Horario: " << this->horas << ":" << this->minutos << ":" << this->segundos << endl;
}
