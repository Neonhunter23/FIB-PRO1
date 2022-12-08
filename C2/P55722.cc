#include <iostream>
using namespace std;

int number_of_digits (int n){
	int ac;
	if (n == 0) ac = 1;
	else ac = 0;
	while(n != 0){
		n /= 10;
		++ac;
	}
	return ac;
}

int main(){
	int n;
	while (cin >> n){
		cout << number_of_digits(n) << endl;
	}
}
