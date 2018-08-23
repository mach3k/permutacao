#ifndef CONVERSOR_H
#define CONVERSOR_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <string>

using namespace std;

/* Pesquisa Operacional - BSI15
   Professor: Rafael Carlos Vélez Benito
   Aluno....: Marcelo Ramos Machado        */

class conversor
{
	public:
		static string doubleToStr(long double valor);
		static string doubleToStr(long double valor, int precisao);
		static string intToStr(int valor);
		static string substVirgula(string texto);
	protected:
		conversor(){ }
};

#endif
