#include "matriz.h"
#include "conversor.h"

/* Pesquisa Operacional - BSI15
   Professor: Rafael Carlos Vélez Benito
   Aluno....: Marcelo Ramos Machado        */

// Construtor sem parâmetros
matriz::matriz(){
	matriz(10,5);
}

// Construtor com parâmetros de tamanho de linha e colunas
matriz::matriz(int linhas, int colunas){
//	cout << "linhas: " + conversor::intToStr(linhas);
//	cout << "colunas: " + conversor::intToStr(colunas);
	lin = linhas;
col = colunas;
	
//	cout << "linhas: " + conversor::intToStr(this->lin) << endl;
//	cout << "colunas: " + conversor::intToStr(this->col) << endl;
	
//	nova(linhas, colunas);
	nova();
}

// Cria uma nova matriz,
// define valores aleatórios para os campos
// e escreve a nova matriz na tela
void matriz::nova(){ //int linhas, int colunas){
//	int i,j;
//	
//	cout << "linhas: " + conversor::intToStr(this->lin) << endl;
//	cout << "colunas: " + conversor::intToStr(this->col) << endl;
//	
////	for (i=0; i < this->lin; i++) {
//	for (i=0; i < 10; i++) {
//    	cout << "Linha " + conversor::intToStr(i);
//    	
////		for (j=0; j < this->col; j++) {
//		for (j=0; j < 5; j++) {
//    		this->interna[i][j] = rand() % 10;
//    		cout << " - " + conversor::intToStr(this->interna[i][j]);
//    	}
//    	cout << endl;
//    }
//    
//	cout << "linhas: " + conversor::intToStr(this->lin) << endl;
//	cout << "colunas: " + conversor::intToStr(this->col) << endl;
}

// Copia os valores entre as linhas
void matriz::move(int origem, int destino){
	lin;
	int vetorTmp[lin];
    exit(0);
    memcpy(vetorTmp, interna[origem], sizeof(vetorTmp));
    memcpy(interna[origem], interna[destino], sizeof(interna[origem]));
    memcpy(interna[destino], vetorTmp, sizeof(interna[destino]));
}

// Seleciona o maior módulo e move para a primeira linha
void matriz::permuta(){
	
}

// Escreve a matriz na tela
void matriz::escreve(){
	int i,j;
	
	cout << conversor::intToStr(lin);
	cout << conversor::intToStr(col);
	
	for (i=0; i < lin; i++) {
    	cout << "Linha " + conversor::intToStr(i);
    	
		for (j=0; j < col; j++) {
    		cout << " - " + conversor::intToStr(interna[i][j]);
    	}
    	cout << endl;
    }
}
