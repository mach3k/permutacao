#ifndef ESCRITOR_H
#define ESCRITOR_H
#include <fstream>

using namespace std;

/* Pesquisa Operacional - BSI15
   Professor: Rafael Carlos Vélez Benito
   Aluno....: Marcelo Ramos Machado        */

class escritor
{
	FILE *arq;
	int result;
	
	public:
		escritor();
		void escrever(string texto);
		void fechar();
		string dataHora();
	protected:
};

#endif
