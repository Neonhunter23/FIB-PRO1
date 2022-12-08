#include <iostream>
using namespace std;

int factorial(int n){
	int fact = 1;
	for (int i = 1; i <= n; ++i){
		fact *= i;
	}
	return fact;
	}


int main(){
	int x;
	cin >> x;
	cout << factorial(x) << endl;
}
			
