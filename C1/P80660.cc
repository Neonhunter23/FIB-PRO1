#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n){
		int steps = 0;
		while (n != 1){ //condicion esencial, si no no entra en el bucle
		if (n % 2 == 0) n /= 2; //caso en que n es par
		else n = n*3 + 1; //caso en que n es impar
		++steps;
		 }
		 cout << steps << endl;
	 }
}
