#include <iostream>
using namespace std;

int main() {
	int n; //numero total de secuencias
	cin >> n;
	int a, b, c, total = 0, count = 0, x;
	while (n != 0){
		cin >> x; //numero de elementos en cada secuencia individualmente
		count = 0; //cuando pasemos de una secuencia a otra, el contador se reinicia
		cin >> a >> b; //hay que saber los dos primeros elementos del triplete antes de iniciar los bucles
		while (x != 2 and cin >> c){
			if (b == (a + c)){ //si hay un triplete, sube el contador total de tripletes del programa y el de la secuencia
				++count;
				++total;
			}
			a = b; //actualizacion de secuencia
			b = c;
			--x; //cada vez tendremos menos elementos en la secuencia
		}
		cout << count << endl;
		--n; //cada vez habran menos secuencias
	}
		cout << "Total: " << total << endl; //contador total de tripletes despues del control D
}
