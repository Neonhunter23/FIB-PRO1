#include <iostream>
using namespace std;

int main(){
	int x, z;
	cin >> x;
	if (x == 0) cout << "0" << endl;
	else{
		while (x != 0){
			z = x % 2;
			x /= 2;
			cout << z;
		}
		cout << endl;
		}
}

