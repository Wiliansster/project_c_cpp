class Revista
{
public:
	Revista();
	Revista(unsigned int codigo, char titulo[], char editora[], unsigned int paginas, unsigned int ano, unsigned int mes);
	~Revista();

	unsigned int codigo;
	char titulo[100];
	char editora[60];
	unsigned int paginas;
	unsigned int ano;
	unsigned int mes;
};
