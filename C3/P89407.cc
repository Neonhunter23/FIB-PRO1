#include <iostream>
#include <vector>
using namespace std;

vector<int> num_digits(int x, int b){ //cuantas veces aparece un digito en el numero
	vector<int> ocurrencias(b, 0);
	while (x > 0){
		int d = x % b; //digito de menos peso
		++ocurrencias[d];
		x /= b;
	}
	return ocurrencias;
}
bool mateixos_digits(int x, int y, int b){ //para ver si el producto de dos numeros tiene los mismos digitos que los originales
	vector<int> ox = num_digits(x, b);
	vector<int> oy = num_digits(y, b);
	vector<int> oxy = num_digits(x*y, b);
	for (int d = 0; d < b; ++d){
		if ((ox[d] + oy[d]) != oxy[d]) return false;
	}
	return true;
}

void hexa(int x){ //en caso de haber algun numero en hexa, para las letras a partir del 10
	if (x < 10) cout << x;
	else cout << char('A' + (x - 10));
}
	
void escriu (int n, int b){
	if (n < b){
	 hexa(n%b);
	 return;
 }
	escriu(n/b, b);
	hexa(n%b);
}


int main(){
	int x, y;
	while (cin >> x >> y){
		cout << "solucions per a " << x << " i " << y << endl;
		bool sol = false;
		for (int b = 2; b <= 16; ++b){
			if (mateixos_digits(x, y, b)){
				sol = true;
				escriu(x, b);
				cout << " * ";
				escriu(y, b);
				cout << " = ";
				escriu(x*y, b);
				cout << " (base " << b << ")";
				cout << endl;
			}
		}
		if (not sol) cout << "cap" << endl;
		cout << endl;
	}
}
	
	
	
	
	
	

