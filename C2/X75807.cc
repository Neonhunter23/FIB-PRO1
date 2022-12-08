#include <iostream>
using namespace std;

// Pre: c is a character
// Post: returns true if c is a letter, false otherwise
bool es_letra(char c) {
    return ('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z');
}
	
// Pre: a sequence of characters in the input
// Post: it prints the very same input characters but reordered.
//       First those that are not letters (in the same order in which
//       they appeared) and then the letters (in reverse order)

void signos_letras() {
	char c;
	while (cin >> c){ //sirve tambien como booleano, si ya no hay mas elementos en la secuencia, ya no entrara en el bucle
		if (not es_letra(c)){ //si es un signo random, primero se imprime y luego se pasa al siguiente (orden en el que aparecen)
			cout << c;
			signos_letras();
		}
		else { //si es una letra, primero se hace la funcion hasta llegar a la ultima letra
			signos_letras();
			cout << c; //luego se imprime (orden inverso)
		}	
	}
}

int main() {
    signos_letras();
    cout << endl;
}
