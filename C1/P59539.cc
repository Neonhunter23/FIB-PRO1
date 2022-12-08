#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	
	int n;
	double inv = 0;				// acumulador de 1/n
	cin >> n;					
	for (int i = 1; i <= n; ++i){
		inv = 1.0/i + inv;			// para que la suma salga real, hay que dividir 1.0 en lugar de 1
	}
	cout << inv << endl;
}
