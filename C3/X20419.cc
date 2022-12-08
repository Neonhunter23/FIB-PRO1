#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char most_frequent_letter(const string& s){
	vector<char> char_list(s.begin(), s.end()); //diseccion de la palabra en un vector de chars
	sort(char_list.begin(), char_list.end()); //ordenacion de la palabra por orden lexicografico
	int count = 1, cmax = 0;
	char p0 = '#', pmax = '#';
	
	for (int i = 0; i < char_list.size(); ++i){
		if (p0 == char_list[i]) ++count; //contador de ocurrencias de letras
		else count = 1;
		if (cmax < count){
			cmax = count;
			pmax = char_list[i];
		}
		p0 = char_list[i];
	}
	return pmax;
}
	
const int LENGTH_ALPHABET = 'z' - 'a' + 1;

int main(){
	cout.setf(ios::fixed);
	cout.precision(2);
	
	double n, mlength = 0; //numero de palabras de la secuencia y acumulador de la media 
	string w;
	cin >> n;
	vector<double> size(n);
	vector<string> words(n);
	for (int i = 0; i < n; ++i){
		cin >> w;
		words[i] = w;
		size[i] = w.size();
		mlength += size[i] / n; //calculo de la media
	}
	cout << mlength << endl;
	for (int i = 0; i < n; ++i){
		if (size[i] >= mlength){
			cout << words[i] << ": " << most_frequent_letter(words[i]) << endl;
		}
	}
}
	
	
