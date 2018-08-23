#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#include "helpers/conversor.h"
#include "helpers/escritor.h"
#include "helpers/matriz.h"

/* Pesquisa Operacional - BSI15
   Professor: Rafael Carlos Vélez Benito
   Aluno....: Marcelo Ramos Machado        */

int main(int argc, char** argv) {
//	int n = 10;
//	int m = 10;
//	
//	int matriz[10][10];
//	int matrizB[10];
//	int matrizL[10][10];
//	int matrizU[10][10];
//	int vPermutacoes[0];
//	
//	int i, j;
//	
//	cout << endl << "Matriz A:" << endl;
//	for (i=0; i<n; i++) {
//    	cout << "Linha " + conversor::intToStr(i) + ": ";
//		for (j=0; j<m; j++) {
//    		matriz[i][j] = rand() % 10;
//    		cout << "  " + conversor::intToStr(matriz[i][j]);
//    	}
//    	cout << endl;
//    }
//    
//	cout << endl << "Matriz B:" << endl;
//    for (i=0; i<n;i++){
//    	matrizB[i] = rand() % 10;
//    	vPermutacoes[i] = i;
//		cout << conversor::intToStr(matrizB[i]) << endl;
//	}
//    
//	cout << endl << "Matriz P:" << endl;
//    for (i=0; i<n;i++){
//    	vPermutacoes[i] = i;
//		cout << conversor::intToStr(vPermutacoes[i]) << endl;
//	}
//	
//	cout << endl << "Matriz L:" << endl;
//	for (i=0; i<n; i++){
//		cout << "Linha " + conversor::intToStr(i) + ": ";
//		for (j=0;j<m;j++){
//			if(i == j){
//				matrizL[i][j] = 1;
//			}
//			else{
//				matrizL[i][j] = 0;
//			}
////			cout << conversor::intToStr(matrizL[i][j]) << endl;
//			cout << "  " + conversor::intToStr(matrizL[i][j]);
//		}
//    	cout << endl;
//	}
//	
//	cout << endl;

	matriz m;
	
//	int maiorModulo = 0;
//	int linhaMaiorModulo = 0;
//	
//	for (i=0;i<n;i++){
//		if(fabs(matriz[i][0]) > maiorModulo){
//			maiorModulo = matriz[i][0];
//			linhaMaiorModulo = i;
//		}
//	}
//	
//	if(maiorModulo == 0){
//		cout << "Esta matriz é impossível resolver ou tem infinitas soluções";
//	}
    
    int origem, destino;
//    
//    cout << endl << "Selecione a linha a ser movida: ";
//    cin >> origem;
//    
//    cout << "Selecione a linha de destino: ";
//    cin >> destino;
    
//    int vetorTmp[10];
//    
//    memcpy(vetorTmp, matriz[origem], sizeof(vetorTmp));
//    memcpy(matriz[origem], matriz[destino], sizeof(matriz[origem]));
//    memcpy(matriz[destino], vetorTmp, sizeof(matriz[destino]));

	m.move(5, 3);
    
//    cout << endl;
//	
//	for (i=0; i<10; i++) {
//    	cout << "Linha " + conversor::intToStr(i) + ": ";
//		for (j=0; j<10; j++) {
//    		cout << "  " + conversor::intToStr(matriz[i][j]);
//    	}
//    	cout << "\n";
//    }

	m.escreve();

	return 0;
}
