#include <iostream>
using namespace std;

int main() {
int x, n, max;
	while (cin >> x){ //el input nos pide varias secuencias, por lo que empezamos con un while cin
		cin >> max; //le damos el valor maximo al primer valor, sea cual sea
		for (int i = 1; i < x; ++i){
			cin >> n;
			if (n > max) max = n; //si el siguiente numero de la secuencia es mayor que el primero, la variable max se actualiza
		}
		cout << max << endl;
	}
}
