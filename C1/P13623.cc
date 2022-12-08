#include <iostream>
using namespace std;

int main() {
	int r, c;
	cin >> r >> c;
	int coin = 0;
	char a;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> a;
			if(i % 2 == j % 2) coin = coin + (a - '0');
			} //si las dos tienen la misma paridad
		}
	
	cout << coin << endl;
}
		
		
