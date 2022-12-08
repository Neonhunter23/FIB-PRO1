#include <iostream>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	
	string s;
	while (cin >> s and s != "acabar"){
		if (s == "perimetro"){
			double a, b, c;
			cin >> a >> b >> c;
			cout << a + b + c << endl;
		}
		else if (s == "area") {
			double b, h;
			cin >> b >> h;
			cout << (b*h)/2 << endl;
		}
	}
}
