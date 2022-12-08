#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matriu;

Matriu product(const Matriu& a, const Matriu& b){
	int p = a.size(); //n de filas
	int r = b[0].size(); //n de columnas
	int q = b.size(); //numero de columnas de a y filas de b (necesario para multiplicar)
	Matriu res(p, vector<int> (r, 0)); //matriz resultado
	for (int i = 0; i < p; ++i){
		for (int j = 0; j < r; ++j){
			for (int k = 0; k < q; ++k){
				res[i][j] += (a[i][k]*b[k][j]); //acumulamos en una posicion la suma de las multiplicaciones de fila por columna
			}
		}
	}
	return res;
}
