#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n ) {
		for (int i = 0; i < n ; ++i){ //bucle empezando desde 0 hasta n-1
			for (int j = 0; j < n - 1 - i; ++j) cout << " "; //expresion del valor de los espacios: n-1-i
			for (int j = 0; j < n+ 2*i; ++j) cout << 'X'; //expresion del valor de las x: n+2i
			cout << endl;
		}
		for (int i = 0; i < (n - 2); ++i){ //fila central
			for (int j = 0; j < n + 2*(n-1); ++j) cout << 'X';
			cout << endl;		
		}
		for (int i = 0; i < n; ++i){ //parte inversa de la del principio
			for (int j = 0; j < i; ++j) cout << " "; //habrá i espacios en cada linea, iran subiendo
			for (int j = 0; j < n + 2*(n-1) -2*i; ++j) cout << 'X'; //cada vez que quitemos una x, tenemos que poner 2 espacios, uno al principio y otro al final
			cout << endl;
		}
		cout << endl;
	}
}
		
		
