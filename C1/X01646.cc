#include <iostream>
using namespace std;

int main(){
	int b;
	cin >> b;
	int n;
	while (cin >> n){
		int res = 0;
		cout << n <<": ";
		while (n > 0) {
			res += n % b;
			n /= b;
		}
		cout << res << endl;
	}
}
	
	
	
	
	

