#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	
	if (a < b){
		int i = a + 1;
		cout << a << ',';
		while (i < b){
			cout << i << ',';
			++i;
		}
		cout << b << endl;
	}
	else if (a == b){
		cout << a << endl;
	}	
	else cout << endl;
}
