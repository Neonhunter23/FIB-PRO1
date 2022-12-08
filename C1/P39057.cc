#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(6);
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i){ // numero de areas que queremos calular
		string s;
		cin >> s;
		if (s == "rectangle"){
			double b, h;		// hay que declaras los lados dentro del if, si no penaliza
			cin >> b >> h;
			cout << b*h << endl;
		}
		else {					// solo queremos saber 2 formas, asi que el else sera circulo siempre
			double r;
			cin >> r;
			cout << M_PI*r*r << endl;		// con el cmath podemos dar un pi muy aproximado
		}
	}
}
