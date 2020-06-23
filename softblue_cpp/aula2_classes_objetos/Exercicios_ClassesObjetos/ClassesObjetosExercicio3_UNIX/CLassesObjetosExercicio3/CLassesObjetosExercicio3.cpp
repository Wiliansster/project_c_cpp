#include "Retangulo.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "\nResolucao Exercicio 3 (CLASSES E OBJETOS)\n\n";

	Retangulo *r = new Retangulo(4, 5);
	r->calcularArea();

	cout << endl;
	return 0;
}

