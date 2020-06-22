/*
    O programa só funcionará se compilar os arquivos .cpp
    g++ ClassesObjetos.cpp Livro.cpp -o classeObjeto 
    ./claseObjeto
*/

#include <iostream>
#include <cstring> // è necessario pois uso a função strcpy

using namespace std;

#include "Livro.h"

int main()
{
    cout << "\nClasses e Objetos" << endl;

    // Criar um objeto
    Livro *meuLivro;
    meuLivro = new Livro();

    meuLivro->codigo = 1;
    strcpy(meuLivro->titulo, " A vida de André");

    cout << "(meuLivro) Codigo: " << meuLivro->codigo << endl;
    cout << "(meuLivro) Titulo: " << meuLivro->titulo << endl;

    // remover meuLivro da memoria apos finalizar o programa
    delete meuLivro;

    // Construtor customizado

    unsigned int codigo;
    char titulo[100];
    char editora[60];
    unsigned int paginas;
    char isbn[20];

    codigo = 2;
    strcpy(titulo, " A vida de André (2)");
    strcpy(editora, "Softblue");
    paginas = 425;
    strcpy(isbn, "958-25-6547-568-5");

    //Agora podemos criar um objeto
    Livro *livroAndre;

    livroAndre = new Livro(codigo, titulo, editora, paginas, isbn);
    // para visualizar faremos variso cout

    cout << endl;
    cout << "(livroAndre) Codigo : " << livroAndre->codigo << endl;
    cout << "(livroAndre) Titulo : " << livroAndre->titulo << endl;
    cout << "(livroAndre) Editora: " << livroAndre->editora << endl;
    cout << "(livroAndre) Paginas: " << livroAndre->paginas << endl;
    cout << "(livroAndre) ISBN: " << livroAndre->isbn << endl;

    delete livroAndre;

    return 0;
}