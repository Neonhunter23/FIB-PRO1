#include <iostream>
using namespace std;

int main(){
	int x, y, z, total = 0, count = 0, m;
	while (cin >> m){
		cin >> x >> y;
		for (int i = 2; i < m; ++i){ //bucle para cada secuencia
			cin >> z;
			if (x % y == z) ++count;
			x = y;
			y = z;
		}
		cout << count << endl;
		total += count; //otra forma de escribir el contador total
		count = 0;
	}
	cout << "Total: " << total << endl;
}
