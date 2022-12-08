#include <iostream>
using namespace std;


int main() {
	bool trobat = false;
	int n, x, p;
	cin >> n; 
	p = n;
	while (not trobat and cin >> x and x != -1){
		--n;
		if (n == 0) {
			cout << "At the position " << p << " there is a(n) " << x << "." << endl;
			trobat = true;
		}
	}
}
	
	
	
	

