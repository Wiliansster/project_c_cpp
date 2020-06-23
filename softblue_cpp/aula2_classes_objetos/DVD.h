class DVD
{
public:
    //Assinatura do metodo construtor padrão
    DVD();

    // Assinaturao do metodo construtor customizado
    DVD(unsigned int codigo, char titulo[], unsigned int discos, unsigned duracao, unsigned int regiao, char lengendas[]);

    // Assinatura do metodo destrutor
    ~DVD();

    //atributos
    unsigned int codigo;
    char titulo[100];
    unsigned int discos;
    unsigned int duracao;
    unsigned int regiao;
    char legendas[50];
};
