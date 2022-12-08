#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector <string>Lista;
typedef vector <vector <char> >Matrix;

Lista llegir_llista(int x) { //leer las palabras que queremos encontrar en la sopa
	Lista s(x);
	for (int i = 0; i < s.size(); ++i) cin >> s[i];
	return s;
}
Matrix llegir_sopa(int n, int m) { //leer la matriz de la sopa de letras
	Matrix sopa(n, vector <char> (m));
	int a = sopa.size();
	int b = sopa[0].size();
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) cin >> sopa[i][j];
	}
	return sopa;
}
void imprimir_sopa(const Matrix& sopa) {
	int a = sopa.size();
	int b = sopa[0].size();
	for (int i = 0; i < a; ++i) {
		bool primero = false;
		for (int j = 0; j < b; ++j) {
			if (primero) cout << ' ';
			else primero = true;
			cout << sopa[i][j];
		}
		cout << endl;
	}
}
void convertir_mayusculas(Matrix& sopa, int l, int i, int j, int inici_i, int inici_j) {
	int k = 0;
	while (k < l) {
		if (sopa[i][j] >= 'a' and sopa[i][j] <= 'z') sopa[i][j] = char(int(sopa[i][j])-int('a')+int('A'));
		i += inici_i;
		j += inici_j;
		++k;
	}
}
bool esta(const Matrix& aux, string s, int i, int j, int inici_i, int inici_j) {
	int k = 0;
	while (i < aux.size() and j < aux[0].size() and k < s.length()) {
		if (s[k] != aux[i][j]) return false;
		i += inici_i;
		j += inici_j;
		++k;
	}
	return k == s.length();
}
void sopa_lletres(const Matrix& aux, Matrix& sopa, Lista s) {
	for (int k = 0; k < s.size(); ++k) {
		int i  = 0;
		string s1 = s[k];
		while (i < sopa.size()) {
			int j = 0;
			while (j < sopa[0].size()) {
				if (s1[0] == aux[i][j]) {
					if (esta(aux, s1, i, j, 0, 1)) convertir_mayusculas(sopa, s1.length(), i, j, 0, 1); //busqueda horizontal
					if (esta(aux, s1, i, j, 1, 0)) convertir_mayusculas(sopa, s1.length(), i, j, 1, 0); //busqueda vertical
					if (esta(aux, s1, i, j, 1, 1)) convertir_mayusculas(sopa, s1.length(), i, j, 1, 1); //busqueda diagonal
				}
				++j;
			}
			++i;
		}
	}
}
int main() {
	int x, n, m;
	bool primero = true;
	while (cin >> x >> n >> m) {
		Lista s = llegir_llista(x);
		Matrix sopa = llegir_sopa(n, m);
		Matrix aux  = sopa;
		sopa_lletres(aux, sopa, s);
		if (not primero) cout << endl;
		else primero = false;
		imprimir_sopa(sopa);
	}
}
