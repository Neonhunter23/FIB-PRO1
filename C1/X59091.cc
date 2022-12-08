#include <iostream>
using namespace std;

int main(){
	int n, m;
	bool primero = true;
	
	while (cin >> m >> n){
		if (not primero) cout << endl; //a partir del segundo rectangulo, hará un endl cuando acabe
		int c = 9;
		for (int i = 0; i < m; ++i){
			for ( int j = 0; j < n; ++j){
				if (c == -1) c = 9; //despues del 0 vuelve al 9
				cout << c;
				--c; //resta un numero al rectangulo
			}
			cout << endl;
		}
		primero = false;
	}
}
