#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int evaluate(const vector<int>& p, int x){
	int n = p.size(), pot, ac = 0;
	for (int i = 0; i < n; ++i){
		pot = pow(x, i); //grado del polinomio dependiendo de p.size()
		ac += (p[i]*pot); //suma del polinomio multiplicado por el valor
	}
	return ac;
}

int main(){
	int n, x;
	cin >> n; //nº de elementos del vector
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	cin >> x; //valor de la variable en el polinomio
	cout << evaluate(v, x) << endl;
}
