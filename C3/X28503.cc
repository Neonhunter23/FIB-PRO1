#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

Matriu llegeix(int n, int m){ //funcion simple para leer matrices, a veces es mejor escribirla a parte
	Matriu res (n, Fila(m));
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> res[i][j];
		}
	}
	return res;
}

bool iguals(Matriu& m, int j1, int j2){
	for (int i = 0; i < m.size(); ++i){
		if (m[i][j1] != m[i][j2]) return false;
	}
	return true;
}

int main(){
	int n, m;
	int count;
	Matriu mat;
	while (cin >> n >> m){
		mat = llegeix(n, m);
		count = 0;
		for (int j1 = 0; j1 < m; ++j1){
			for (int j2 = j1+1; j2 < m; ++j2){
			if (iguals(mat, j1, j2)){
				 ++count; 
				 j2 = m;
			 }
		}
	}
	cout << m-count << endl;
}
}
		
