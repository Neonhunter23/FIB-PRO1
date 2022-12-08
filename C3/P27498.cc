#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

void swap (int& x, int& y){ //para cambiar los valores de i y j
	int temp = x;
	x = y;
	y = temp;
}

void transpose(Matriu& m){
	int n = m.size(); //tamaño de las filas (tambien de las columnas, porque es cuadrada)
	for (int i = 0; i < n-1; ++i){
		for (int j = i+1; j < n; ++j){ //tratamos solo el triangulo superior de la matriz y lo cambiamos
			swap (m[i][j], m[j][i]);
		}
	}
}


		
