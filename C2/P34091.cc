#include <iostream>
using namespace std;

bool is_perfect (int n){
	int res = 1;
	for (int i = 2; i * i <= n; ++i){   //solo tiene divisores hasta sqrt(n)
		if (n % i == 0){
			res += i+n /i;
		}
	}
	if (n != 0 and n != 1){ //el 0 y el 1 son trampa, no tienen divisores
		return (res == n);
	}
		else return false;
}


int main(){
	int x;
	while(cin >> x){
		if(is_perfect (x))cout << "true" << endl;
		else cout << "false" << endl;
	}
}
