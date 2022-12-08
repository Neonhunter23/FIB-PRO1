#include <iostream>
#include <cmath>
using namespace std;

double sen(double a){
	return sin(a);
}
double kos(double a){
	return cos(a);
}

int main() {
	cout.setf(ios::fixed);
	cout.precision(6);
	
	double x;
	while (cin >> x){
		x = (x/180)* M_PI;
		cout << sen(x) << " " << kos(x) << endl;
	}
}
