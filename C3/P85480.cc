#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n){ //funcion de primo, ez
	if (n < 2) return false;
	else{
	for (int i = 2; i < n and i * i <= n; ++i){
		if (n % i == 0) return false;
	}
	return true;
	}
}

int main(){
	int n;
    while (cin >> n){
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int i = 0; //primer numero a comparar
		bool found = false; //esquema de busqueda
		while (not found and i < n){
			int j = 0; //segundo elemento a comparar
			while (not found and j < n){
				if (i != j){
					if (is_prime(v[i]+v[j])) found = true;
				}
				++j; //primero avanzaremos el segundo elemento
			}
			++i; //luego el primero
		}
		if (found) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
		
	
	
	
	
	
