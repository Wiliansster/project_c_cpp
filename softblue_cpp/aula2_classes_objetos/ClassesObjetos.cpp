/*
    O programa só funcionará se compilar os arquivos .cpp
    g++ ClassesObjetos.cpp Livro.cpp -o classeObjeto 
    ./claseObjeto
*/

#include <iostream>
#include <cstring> // è necessario pois uso a função strcpy

using namespace std;

#include "Livro.h"
#include "Revista.h"
#include "CD.h"
#include "DVD.h"

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

    // Classe revista
    // Criar um objeto revista
    Revista *minhaRevista;
    minhaRevista = new Revista;

    minhaRevista->codigo = 3;
    strcpy(minhaRevista->editora, "Sociologia Econômica");

    cout << "\n\n(minha revista) Codigo :" << minhaRevista->codigo << endl;
    cout << "(minhaRevista) Editora :" << minhaRevista->editora << endl;

    // remover da memoria apos a finalização do codigo
    delete minhaRevista;

    // construtor customizado
    /*unsigned int codigo;
    char titulo[100];
    char editora[60];
    unsigned int paginas;*/
    unsigned int ano;
    unsigned int mes;

    codigo = 4;
    strcpy(titulo, "Econometrics Journals");
    strcpy(editora, "FEUC");
    paginas = 100;
    ano = 2010;
    mes = 12;

    //Agora podemos criar outro objeto
    Revista *academicRevista;

    academicRevista = new Revista(codigo, titulo, editora, paginas, ano, mes);
    //Para visualizar faremos

    cout << "\n\n(academicRevista) Codigo : " << academicRevista->codigo << endl;
    cout << "(academicRevista) Titulo : " << academicRevista->titulo << endl;
    cout << "(academicRevista) Editora : " << academicRevista->editora << endl;
    cout << "(academicRevista) Paginas : " << academicRevista->paginas << endl;
    cout << "(academicRevista) Ano : " << academicRevista->ano << endl;
    cout << "(academicRevista) Mes : " << academicRevista->mes << endl;
    cout << endl;

    delete academicRevista;

    // Classe CD
    // Criar um objeto CD
    CD *meuCD;
    meuCD = new CD;

    meuCD->codigo = 5;
    strcpy(meuCD->titulo, "Melhores do Silvan Santos");

    cout << "\n\n(meu CD) Codigo : " << meuCD->codigo << endl;
    cout << "(meu CD) Titulo : " << meuCD->titulo << endl;
    //remover da memoria
    delete meuCD;

    //Construtor customizado
    unsigned int discos;
    unsigned int duracao;
    unsigned int faixas;

    codigo = 6;
    strcpy(titulo, "Kirly Frankly");
    discos = 1;
    duracao = 60;
    faixas = 12;

    //Agora podemos criar objeto customizado
    CD *oldCD;

    oldCD = new CD(codigo, titulo, discos, duracao, faixas);
    //para visualizar faremos

    cout << "\n\n(oldCD) Codigo: " << oldCD->codigo << endl;
    cout << "(oldCD) Titulo: " << oldCD->titulo << endl;
    cout << "(oldCD) Disco: " << oldCD->discos << endl;
    cout << "(oldCD) Duração: " << oldCD->duracao << endl;
    cout << "(oldCD) Faixas: " << oldCD->faixas << endl;
    cout << endl;

    delete oldCD;

    //Classe DVD
    //Criar um objeto DVD
    DVD *meuDVD;
    meuDVD = new DVD;

    meuDVD->codigo = 7;
    strcpy(meuDVD->titulo, "Mundo animal");

    cout << "\n\n(Meu DVD) : " << meuDVD->codigo << endl;
    cout << "(Meu DVD) : " << meuDVD->titulo << endl;
    // remover da memoria
    delete meuDVD;

    //constutor customizado
    unsigned int regiao;
    char legendas[50];

    codigo = 8;
    strcpy(titulo, "Testemunho do Pr Aldo o Ex-bruxo");
    discos = 14;
    duracao = 120;
    regiao = 15;
    strcpy(legendas, "Inglês, Alemão e Italiano");

    //agora podemos criar outro objeto DVD
    DVD *testemunhoDVD;
    testemunhoDVD = new DVD(codigo, titulo, discos, duracao, regiao, legendas);

    //Para visualizar

    cout << "\n\n(tesmunhoGospel Codigo: " << testemunhoDVD->codigo << endl;
    cout << "(tesmunhoGospel Titulo: " << testemunhoDVD->titulo << endl;
    cout << "(tesmunhoGospel Discos: " << testemunhoDVD->discos << endl;
    cout << "(tesmunhoGospel Duração: " << testemunhoDVD->duracao << endl;
    cout << "(tesmunhoGospel Região: " << testemunhoDVD->regiao << endl;
    cout << "(tesmunhoGospel Legendas: " << testemunhoDVD->legendas << endl;
    cout << endl;

    //remove da memoria
    delete testemunhoDVD;

    return 0;
}