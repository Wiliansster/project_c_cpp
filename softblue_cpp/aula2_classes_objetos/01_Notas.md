# Classes e Objetos

* Estrutura de dados
* Representa um tipo de dado
* Comportamento própio

Exemplo: *classe livro*
``` 
    título  
    autor
    ISBN
    paginas
    ano
```
Estas caracteristicas são chamandos de **atributo**

Métodos da classe: são ações que são realizadas na classes
```
    salvar()
    selecionar()
    excluir()
```
Atributos
* caracteristicas da classe
* tipos primitivos e/ou outras classes
* Representados por **substantivos**
* Exemplos: nome, idade, endereço, cor, tamanho

Métodos
* Ações que a classe pode realizar
* Podem receber parametrops e retornar valores
* Representados por **verbos**
* Exemplos: salvar, ler, abrir, fechar, emprestar

```cpp
class NOmeDaClasse{

    /* Atributos */

    /* Métodos */
}
```

## Cabeçalhos e Implementações

1. Cabeçalhos (.h)
   * Nome da classe
   * Atributos
   * assinatura dos métodos   
2. Implementação (.cpp)
   * código dos métodos

Exemplo

```cpp
class Usuario{
public: //Modificador de acesso

    //atributos
    char nome[60];
    int idade;

    //assinatura
    void apresentar(); // não retorna nada
}
```

```cpp
#include"Usuario.h"
#include<string>

// implementação do métodos
void Usuario::apresentar(){
    cout << "Meu nome é " << this -> nome;
}
```
# Objeto
* classe  não é um objeto
* classe é um modelo de objeto (template) Ex: construção civil, o projeto é uma classe e a obra pronta um objeto.
* Objetos são instância de classes

## Criando objetos
* operador **new**
```cpp
    Usuario * usuario1 = new Usuario();
    Usuario * usuario2 = new Usuario();
    Usuario * usuario3 = usuario1; 
    // Dois objetos e três variáveis
```
## Construtures
* Método construtor
* Customiza o código de inicialização da classe
* Método de mesmo nome da classe
```cpp
class Usuario{
    //Construtor padrão
    Usuario();
}
```

```cpp
#include"Usuario.h"
#include<string>

Usuario::Usuario()
{
    // possiveis inicializações ou outras açoes
}

```

```cpp
// Utilizando o construtor padrão
usuario = new Usuario();
strcpy(usuario ->nome, "André");
usuario -> idade = 30;
usuario -> apresentar();

```
## Sobrecarga de métodos

*   Método de mesmo nome de outro
*   Diferente assinatura (parâmetros)
*   Construtures customizados e outros

```cpp
class Usuario{
    //Construtor padrão
    Usuario();
    //construtor customizado
    Usuario(char noem[], int idade);
}
```

```cpp
#include"Usuario.h"
#include<string>

Usuario::Usuario(){}

Usuario::Usuario(char nome[], int idade)
{
    strcpy(this -> nome, nome);
    this-> idade = idade;
} 
```
```cpp
// Utilizando o construtor padrão
usuario = new Usuario();
strcpy(usuario ->nome, "André");
usuario -> idade = 30;
usuario -> apresentar();

// Utilizando o construtor customizado
usuario = new Usuario("André", 30);
usuario -> apresentar();
```
## Destrutor
* Método destrutor
* Customiza o código de exclusão da classe
* Liberação de memória
* Método de mesmo nome da classe, com `~`
* Invocando pelo comando **delete**

```cpp
class Usuario{
    //Destrutor
    ~Usuario();
}
```

```cpp
#include "Usuario.h"
Usuario::~Usuariio()
{

}
```
```cpp
// Utilizando o construtor padrão
usuario = new Usuario();
strcpy(usuario ->nome, "André");
usuario -> idade = 30;

// Destruindo o objeto
delete usuario;

// Ou também: delete(usuario);
```

## Operador this
* Diferencia um atributo do objeto de um atributo do método
* Fornece a referência do próprio objeto para outro método
* Funciona somente dentro do próprio objeto

```cpp
void Usuario::meuMetodo(int var)
{
    cout<< var<< endl;
    cout << this-> <<endl;
}
```

```cpp
 Usuario *usuario = new Usuario();
 usuario -> var = 10;
 usuario -> meuMetodo(20);
//imprime 20 depois 10
```