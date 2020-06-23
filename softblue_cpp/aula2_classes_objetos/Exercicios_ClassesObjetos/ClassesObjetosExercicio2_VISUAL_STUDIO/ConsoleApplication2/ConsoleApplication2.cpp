#include "Relogio.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "\nResolucao Exercicio 2 (CLASSES E OBJETOS)\n\n";

	Relogio *r = new Relogio(12, 03, 16);
	r->exibirHoras();

	cout << endl;
	system("PAUSE");
	return 0;
}

