#include <iostream>
using namespace std;

int main(){
	int n, y;
	cin >> n;
	if (n == 0) cout << 0;
		while (n != 0){
			y = n % 16;
			n /= 16;
			if (y >= 10) cout << char('A'+y-10);
			else cout << y;
		}
		cout << endl;
	}

