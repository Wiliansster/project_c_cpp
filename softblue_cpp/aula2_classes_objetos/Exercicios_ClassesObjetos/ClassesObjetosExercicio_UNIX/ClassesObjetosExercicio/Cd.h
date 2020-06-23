class Cd
{
public:
	Cd();
	Cd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, unsigned int faixas);
	~Cd();

	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	unsigned int faixas;
};
