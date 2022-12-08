#include <iostream>
using namespace std;

bool c_frac (int n1, int d1, int n2, int d2){
	int r = n1 * d2;;
	int p = d1 * n2;
	if (r < p) return true;
	else return false;
}

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
		if (c_frac(a, b, c, d)) cout << "yes" << endl;
		else cout << "no" << endl;
}
