#include <iostream>
using namespace std;
//secuencia de primos acabada en un numero no primo

bool es_primer (int x){
	if (x < 2) return false; //x mayor que 0 y 1
	for (int i = 2; i < x and i*i <= x; ++i){
		if (x % i == 0) return false;
	}
	return true;
}
int next_primer (int x){
	++x;
	while (not es_primer(x)) ++x; //le iremos sumando 1 hasta ser el siguiente numero primo
	return x;
	
}
int main(){
	int x;
	while (cin >> x and es_primer(x)){
		cout << next_primer(x) << endl;
	}
}
