#ifndef MATRIZ_H
#define MATRIZ_H

#include "escritor.h"

/* Pesquisa Operacional - BSI15
   Professor: Rafael Carlos Vélez Benito
   Aluno....: Marcelo Ramos Machado        */

class matriz
{
//	int lin = 10, col = 5;
	int lin, col;
	int interna[10][5];
	escritor log;
	
	public:
		matriz();
		matriz(int linhas, int colunas);
		
//		void nova(int linhas, int colunas);
		void nova();
		void move(int origem, int destino);
		void permuta();
		void escreve();
	protected:
};

#endif
