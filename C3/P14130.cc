#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, counter = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i]; //IMPORTANTE: INICIALIZACION DE VECTORES
	}
	for (int i = 0; i < v.size()-1; ++i){ //si pongo v.size es mas ez
		if (v[i] == v[n-1]) ++counter;	  //v.size -1 porque no se cuenta el ultimo elemento, ya que es el que analizamos
	}
	cout << counter << endl;	
}
