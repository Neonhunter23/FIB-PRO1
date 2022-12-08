#include <iostream>
using namespace std;

bool is_power_2(int n){
	if (n == 0) return false;
	while (n > 1 and n % 2 == 0) n /= 2; //division sucesiva entre 2 hasta llegar a 1
	if (n == 1) return true;
	return false;
}


int main() {
	int n, pos = 1;
	bool trobat = false;
	while (not trobat and cin >> n and n != -1){
		if (is_power_2(n)) trobat = true;
		else ++pos;
		 }
		 if (trobat) cout << pos << endl;
		 else cout << 0 << endl;
	}

