class CD
{
public:
    // assinatura dos construtor padrão
    CD();

    // Assinatura do construtor customizado
    CD(unsigned int codigo, char titulo[], unsigned int discos, unsigned duracao, unsigned int faixas);

    //assinatura do destrutor
    ~CD();

    //atributos
    unsigned int codigo;
    char titulo[100];
    unsigned int discos;
    unsigned int duracao;
    unsigned int faixas;
};
