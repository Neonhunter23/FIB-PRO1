#include <iostream>
using namespace std;

int main(){
	int x;
	while (cin >> x){
		cout << "The sum of the digits of " << x << " is ";
		int count = 0;
		while (x != 0){
			count += x % 10;
			x /= 10;
		}
		cout << count << '.' << endl;
	}
}
