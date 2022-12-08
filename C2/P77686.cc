#include <iostream>
using namespace std;


int al_reves (int n){
	int r = 0;
	while (n > 0){
		r = r*10 + n%10;
		n /= 10;
	}
	return r;
}
bool is_palindromic (int n){
	return n == al_reves(n);
}


int main(){
	int n;
	cin >> n;
	while (n != 0){
	if (is_palindromic(n)) cout << "true" << endl;
	else cout << "false" << endl;
}
}
