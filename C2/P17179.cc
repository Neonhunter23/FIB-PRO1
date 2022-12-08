#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int n, n1;
	double x, tot = 0, min = 0, max = 0, avg = 1;
	cin >> n;
	for (int i = 0; i < n; ++i){ //tratar el numero de secuencias
		avg = 1;
		cin >> n1;
		cin >> x;
		max = x;
		min = x;
		tot = x;
		//el primer elemento de la secuencia sera el maximo y el minimo, para que se actualizen a medida que se vayan tratando mas elementos
		for (int j = 1; j < n1; ++j){ //tratar el numero de elementos de cada secuencia
			cin >> x; 
			if (x > max) max = x;
			if (x < min) min = x;
			tot += x; //suma total de la secuencia
			++avg; //total de elementos de la secuencia para hacer la media
		}
		cout << min << " " << max << " " << tot/avg << endl;
	}
}
