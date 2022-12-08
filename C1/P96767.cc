#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	
	double z, res, n;
	cin >> z >> res;
	double p = 1; //el polinomio desde 1
	while (cin >> n){
		p *= z; //el grado del polinomio sube
		res += (n*p); //cada numero se multiplica por el grado ascendiente del polinomio
	}
	cout << res << endl;
}
