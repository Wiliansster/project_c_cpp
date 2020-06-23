class Dvd
{
public:
	Dvd();
	Dvd(unsigned int codigo, char titulo[], unsigned int discos, unsigned int duracao, char legendas[], unsigned int regiao);
	~Dvd();

	unsigned int codigo;
	char titulo[100];
	unsigned int discos;
	unsigned int duracao;
	char legendas[50];
	unsigned int regiao;
};
