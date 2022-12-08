#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matrix;

void read_mat(Matrix& mat){
	int n = mat.size();
	int m = mat[0].size();
	
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> mat[i][j];
		}
	}
}

bool equal(const Matrix& mat, int i, int j){
	int n = mat[0].size();
	for (int k = 0; k < n; ++k){
		if (mat[i][k] != mat[j][k]) return false;
	}
		return true;
}

bool new_row(const Matrix& mat, int i){
	for (int j = 0; j < i; ++j){
		if (equal(mat, j, i)) return false;
	}
		return true;
}

int main(){
	int n, m;
	while (cin >> n >> m){
		Matrix mat (n, Fila(m));
		read_mat(mat);
		int count = 0;
		for (int i = 0; i < n; ++i){
			if (new_row(mat, i)) ++count;
		}
			cout << count << endl;
	}
}
	
