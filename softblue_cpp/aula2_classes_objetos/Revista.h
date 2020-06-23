class Revista
{
public:
    // criar assinatura do método construtor
    Revista();

    Revista(unsigned int codigo, char titulo[], char editora[],unsigned int paginas,unsigned int ano, unsigned int mes);

    // assinatura o metodo destrutor
    ~Revista();

    //atributos
    unsigned int codigo;
    char titulo[100];
    char editora[60];
    unsigned int paginas;
    unsigned int ano;
    unsigned int mes;
};
