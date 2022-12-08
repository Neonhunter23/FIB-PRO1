#include <iostream>
using namespace std;

//dados una vocal c y un entero n, escriba la codificación morse de c e incremente n con el numero de simbolos de la codificacion de c
//salida: mensaje original traducido a morse

void morse (char c, int& n){
	if (c == 'a'){
		cout << ".-";
		n += 2; //el caracter en morse tiene 2 simbolos: el punto y el guion
	}
	else if (c == 'e'){
		cout << ".";
		++n;
	}
	else if (c == 'i'){
		cout << "..";
		n += 2;
	}
	else if (c == 'o'){
		cout << "---";
		n += 3;
	}
	else{
		 cout << "..-";
		 n += 3;
	 }
 }
	
int main(){
	int inc; //numero de caracteres por linea
	cin >> inc;
	char c;
	int n = 0;
	
	while (cin >> c){
		morse (c, n);
		if (n >= inc){ //cuando ya hayan inc caracteres, saltamos de linea
			cout << endl;
			n = 0;
		}
	}
		if (n > 0) cout << endl;
		cout << "STOP" << endl; //fin de la secuencia (ctrl D)
}
