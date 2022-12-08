#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& s){
	int i = 0; //primera letra de la string
	int j = s.length() - 1; //ultima letra de la string
	while (i < j){ //lo normal es que i esté por la parte izq de la palabra y k por la derecha hasta que se encuentren
		if (s[i] != s[j]) return false; //si son diferentes no es palindromo
		else{
			++i; //avanzamos a la derecha i
			--j; //avanzamos a la izquierda j
		}
	}
			return true; //en el momento que se haya llegado a la mitad de la palabra siendo palindromo, a la siguiente iteracion sale del bucle y devuelve true directamente
}

int main(){
	string s;
	while (cin >> s){
		if (is_palindrome(s)) cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
}
