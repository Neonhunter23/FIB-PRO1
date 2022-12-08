#include <iostream>
using namespace std;

int main(){
	int x, y;
	cin >> x;
	for (int i = 2; i <= 16; ++i){ // bucle para las bases
		int count = 0;   // contador del numero de cifras
		y = x;
		while (y != 0){ // bucle para el numero de cifras
			y /= i;     // cálculo del numero de cifras dividendo entre la base del bucle for
			++count;
		}
		cout << "Base " << i << ": " << count << " cifras." << endl;
	}
}
