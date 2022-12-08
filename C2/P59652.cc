#include <iostream>
using namespace std;
//1.Leemos los valores de num y den
//2.Calculamos el mcd de los 2 numeros
//3.Dividimos num y den por el mcd

int mcd (int num, int den){
	while (den != 0){
		int r = num % den; //módulo
		num = den;
		den = r; //cambiamos y por el módulo y seguimos sacando el módulo de x e y
	}
	return num;
}

 void read_rational(int& num, int& den){
	char c;
	cin >> num >> c >> den;
	int o = mcd(num, den);
	num /= o;
	den /= o;
}

int main() {
int num , den ;
read_rational (num , den);
cout << num << " " << den << endl;
}
