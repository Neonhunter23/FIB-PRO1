#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int> > Matrix;

Matrix product (const Matrix& a, const Matrix& b){
	int p = a.size(); //filas y columnas de las dos matrices
	Matrix res(p, vector<int> (p, 0));
	for (int i = 0; i < p; ++i){
		for (int j = 0; j < p; ++j){
			for (int k = 0; k < p; ++k) res[i][j] += (a[i][k] * b[k][j]);
		}
	}
	return res;
}



