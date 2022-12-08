#include <iostream>
#include <vector>
using namespace std;

vector<int> obtain_peaks(const vector<int>& v){
	int x0 = v[0], x1 = v[1]; //primeros dos valores de la secuencia
	vector<int> peaks;
	for(int i = 2; i < v.size(); ++i){
		if (x0 < x1 and x1 > v[i]) peaks.push_back(x1); //se genera un pico
		x0 = x1; //actualizacion de la secuencia
		x1 = v[i];
	}
	return peaks;
}

int main(){
	int n;
	bool nada = true; //booleano para secuencias vacias
	cin >> n; //numero de elementos de la secuencia
	vector<int> mountain(n);
	for(int i = 0; i < n; ++i){
		cin >> mountain[i];
	}
	vector<int>res = obtain_peaks(mountain);
	int resize = res.size(); //numero de picos
	cout << resize << ":"; 
	for(int i = 0; i < resize; ++i){
		cout << " " << res[i]; //los picos que hay en la secuencia
	}
	cout << endl;
	for(int i = 0; i < resize - 1; ++i){
		if (res.back() < res[i]){ //picos mas altos que el ultimo de la secuencia
			if (not nada) cout << " ";
			cout << res[i]; 
			nada = false;
		}
	}
	if (nada) cout << "-"; //ningun pico
	cout << endl;
}
