#include <iostream>
using namespace std;

struct Rational {
	int num, den;
};

Rational rational(int n, int d) {
	Rational rac_normal;
	if (n == 0) { //primera condicion
		rac_normal.den = 1;
		rac_normal.num = 0;
		return rac_normal;
	} else   {
		bool negar;
		if (n * d > 0) { //caso en que tanto num como den sean negativos
			if (n < 0) {
				n *= -1;
				d *= -1;
			}
			negar = false;
		} else   {
			if (d < 0) d *= -1; //caso en que uno de los dos sea negativo
			else n *= -1;
			negar = true;
		}
		int petit;
		if (n < d) petit = n;
		else petit = d;
		for (int div = petit; div >= 2; --div) {
			if ((n % div == 0) and (d % div == 0)) { //calculo del mcd de los dos numeros para simplificar
				n /= div;
				d /= div;
			}
		}
		if (not negar) rac_normal.num = n;
		else if (negar) rac_normal.num = n * -1;
		rac_normal.den = d;
		return rac_normal;
	}
}


int main() {
	int n, d;
	cin >> n >> d;
	Rational frac_norm = rational(n, d);
	cout << frac_norm.num << "/" << frac_norm.den << endl;
}
