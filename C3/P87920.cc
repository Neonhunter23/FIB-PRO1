#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n; //numero de secuencias
	while (cin >> n){
		vector <int> v(n);
		int count = 0;
		for (int i = 0; i < n; ++i){
			cin >> v[i];
			count += v[i]; //ponemos en un contador la suma de todos los elementos del vector
		}
		bool found = false; //esquema de busqueda CLASICO
		int i = 0; //indice de las posiciones del vector
	while (not found and i < v.size()){
		if (v[i] == count - v[i]) found = true; //si restamos a la suma total uno de los valores y es igual, es cierto
		++i; //pasamos a la siguiente posicion del vector
	}
	if (found) cout << "YES" << endl;
	else cout << "NO" << endl;	
	}
}
