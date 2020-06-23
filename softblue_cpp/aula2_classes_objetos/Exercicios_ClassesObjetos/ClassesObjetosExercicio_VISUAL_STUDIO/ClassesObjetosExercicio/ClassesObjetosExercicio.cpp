#include <iostream>
using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "Cd.h"
#include "Dvd.h"

int main()
{
	cout << "\nClasses e Objetos: Exercicio" << endl;

	// Variaveis diversas para utilizacao no exercicio

	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	char isbn[20];
	unsigned int ano;
	unsigned int mes;
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
	char legendas[50];
	unsigned int regiao;

	// Criando um objeto do tipo REVISTA

	codigo = 3;
	strcpy(titulo, "Olhe Magazine");
	strcpy(editora, "Maio");
	paginas = 57;
	ano = 2000;
	mes = 5;

	Revista *revista;
	revista = new Revista(codigo, titulo, editora, paginas, ano, mes);

	cout << endl;
	cout << "(revista) Codigo: " << revista->codigo << endl;
	cout << "(revista) Titulo: " << revista->titulo << endl;
	cout << "(revista) Editora: " << revista->editora << endl;
	cout << "(revista) Paginas: " << revista->paginas << endl;
	cout << "(revista) Ano: " << revista->ano << endl;
	cout << "(revista) Mes: " << revista->mes << endl;

	delete revista;

	// Criando um objeto do tipo Cd

	codigo = 4;
	strcpy(titulo, "Toys N' Roses");
	discos = 2;
	duracao = 114;
	faixas = 14;

	Cd *cd;
	cd = new Cd(codigo, titulo, discos, duracao, faixas);

	cout << endl;
	cout << "(cd) Codigo: " << cd->codigo << endl;
	cout << "(cd) Titulo: " << cd->titulo << endl;
	cout << "(cd) Discos: " << cd->discos << endl;
	cout << "(cd) Duracao: " << cd->duracao << endl;
	cout << "(cd) Faixas: " << cd->faixas << endl;

	delete cd;

	// Criando um objeto do tipo Dvd

	codigo = 5;
	strcpy(titulo, "Matrix");
	discos = 1;
	duracao = 134;
	strcpy(legendas, "PT, EN, FR");
	regiao = 4;

	Dvd *dvd;
	dvd = new Dvd(codigo, titulo, discos, duracao, legendas, regiao);

	cout << endl;
	cout << "(dvd) Codigo: " << dvd->codigo << endl;
	cout << "(dvd) Titulo: " << dvd->titulo << endl;
	cout << "(dvd) Discos: " << dvd->discos << endl;
	cout << "(dvd) Duracao: " << dvd->duracao << endl;
	cout << "(dvd) Legendas: " << dvd->legendas << endl;
	cout << "(dvd) Regiao: " << dvd->regiao << endl;

	delete dvd;

	// Encerrando o aplicativo

	cout << endl;
	system("PAUSE");
	return 0;
}