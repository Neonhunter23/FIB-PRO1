#include <iostream>
using namespace std;

bool is_univariate (int n){
	if (n > 9){
		if ((n % 10) == ((n / 10)% 10)) return is_univariate (n / 10); //si todos los digitos son iguales, es univariado
		else return false;
	}
	return true;
}

int main() {
	int n;
	int pos = 1;
	bool trobat = false;
	while (not trobat and cin >> n and n != -1){ //esquema de búsqueda clasico
		if (is_univariate(n)) trobat = true;
		else ++pos; //vamos avanzando en la secuencia para encontrar la posicion
	}
	if (trobat) cout << pos << endl;
	else cout << 0 << endl;
}

