#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double c, i, t;
	string type;
	cin >> c >> i >> t >> type;
	
	if (type == "simple"){
		cout << c + (c*i/100*t) << endl;
	}
	else if (type == "compound"){
		cout << c*pow((1+i/100), t) << endl;
	}
}
