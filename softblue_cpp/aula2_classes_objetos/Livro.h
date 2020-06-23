class Livro
{
public:
    //criar assinatura do método construtor
    Livro();
    /* sobrecarga isto é aceito se o constror tive parametro diferentes
    pode ter qualquer nome, mas por conversão utiliza -se o mesmo 
    nome da classe e diferencia o acesso utilizado o operador this 
    ** NÃO PASSA O TAMANHO DA STRING **
     */
    Livro(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, char isbn[]);
    //assinatura o metodo destrutor
    ~Livro();

    //atributos
    unsigned int codigo;
    char titulo[100];
    char editora[60];
    unsigned int paginas;
    char isbn[20];
};
