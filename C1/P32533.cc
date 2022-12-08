#include <iostream>
using namespace std;

// 1. Escribir +: n -(i+1)
// 2. Poner una / al final de la fila (posicion n)
// 3. el numero de + ira disminuyendo y el numero de * ira creciendo

int main(){
int n;
cin >> n;
for (int i = 0; i < n; ++i){
	for (int j = 0; j < n-i-1; ++j) cout << "+";
	cout << '/';
	for ( int j = 0; j < i; ++j) cout << "*";
	cout << endl;
	}
}
