#include <iostream>
using namespace std;

int main(){
cout.setf(ios::fixed);
cout.precision(2);

int n;
cin >> n;
double x;
double suma1, suma2;
	for (int i = 1; i <= n; ++i){
		cin >> x;
		suma1 += (x*x);
		suma2 += x;
	}
		suma2 *= suma2;
		suma1 /= (n-1.0);
		suma2 /= (n*(n-1.0));
		cout << suma1 - suma2 << endl;
}
