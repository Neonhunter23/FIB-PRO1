#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; ++i){ //empieza con 1 estrella el rombo
		for (int j = 0; j < n - i; ++j) cout << " "; //Espacios que disminuyen
		for (int k = 0; k < 2 * i-1; ++k) cout << "*"; //Estrellas que aumentan hasta la fila central
		cout << endl;
	}
	for (int i = n-1; i >= 1; --i){ //parte de abajo que va disminuyendo estrellas y aumentaando espacios
		for (int j = 0; j < n-i; ++j) cout << " ";
		for (int k = 0; k < 2 * i-1; ++k) cout << "*";
		cout << endl;
	}
}
	
	
	
	
	
	

