#include <iostream>
using namespace std;

int main() {
	int n, d, e = 0;
	cin >> n;
	int coin = 0;
	d = n - 1; //diagonal izquierda
	char c;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> c;
			if (j == e or j == d ) coin = coin + (c - '0'); //las coordenadas de las diagonales son iguales
		} //no hay que sumar 2 veces una casilla que coincida en las dos diagonales
		++e; //movemos una casilla hacia abajo
		--d; //movemos una casilla hacia la izquierda
	}
	cout << coin << endl;
}
	
