#include "Retangulo.h"
#include <iostream>
using namespace std;

Retangulo::Retangulo(int ladoA, int ladoB)
{
	this->ladoA = ladoA;
	this->ladoB = ladoB;
}

void Retangulo::calcularArea()
{
	int area = this->ladoA * this->ladoB;
	cout << "A area do retangulo e: " << area << endl;
}

