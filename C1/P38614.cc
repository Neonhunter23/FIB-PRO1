#include <iostream>
using namespace std;

int main(){
	int n, num;
	cin >> n;
	num = n;  //el número saldrá por pantalla con esta variable
	int count = 0;
	while (n != 0){
		count += n%10;  //a partir del último número empezamos a sumar cifras de 2 en 2
		n /= 100; // sumamamos de 2 en 2 (cifras en posiciones impares)
	}
	string b;
	if (count % 2 == 0) b = ""; // si la suma ha dado par, no ponemos nada
	else b = " NOT";
	cout << num << " IS" << b << " COOL" << endl;
	
	
	
	
}
