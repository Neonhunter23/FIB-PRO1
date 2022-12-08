#include <iostream>
#include <string>
using namespace std;

bool leer_linea(bool &ordenado){
	int n;
	if (not (cin >> n)){
		ordenado = false;
		return false;
	}
	ordenado = true;
	if (n == 0) return true;
	string anterior;
	cin >> anterior;
	for (int i = 1; i < n; ++i){ //búsqueda
		string s;
		cin >> s;
		if (s < anterior) ordenado = false;
		anterior = s;
	}
	return true;
}
int main(){
	int x = 1;
	bool orden = false;
	while (leer_linea(orden) and not orden){
		++x;
	}
		
	if (orden) cout << "The first line in increasing order is " << x << "." << endl;
	else cout << "There is no line in increasing order." << endl;
}
