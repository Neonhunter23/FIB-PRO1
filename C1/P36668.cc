#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int suma = 0;
	for (int i = 0; i <= n; ++i){
		suma = i*i + suma; //acumulamos el primer cuadrado en la variable y seguimos sumando
	}
	cout << suma << endl;
} 
	
