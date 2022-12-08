#include <iostream>
#include <string>
using namespace std;
//guardaremos las dos palabras más grandes en orden lexicográfico

int main(){
	string s;
	string ultima, penultima;
	while (cin >> s){
		if (ultima < s){
			penultima = ultima;
			ultima = s;
		}
		else if (penultima < s and s < ultima){
			penultima = s;
		}
	}
	cout << penultima << endl;
}

