#include <iostream>
using namespace std;

int main() {
	bool trobat = false;
	int n, x, p;
	cin >> n; 
	p = n;
	while (not trobat and cin >> x){
		--n;
		if (n == 0) {
			trobat = true;
		}
	}
	if (trobat) cout << "At the position " << p << " there is a(n) " << x << "." << endl;
	else cout << "Incorrect position." << endl;
}	

