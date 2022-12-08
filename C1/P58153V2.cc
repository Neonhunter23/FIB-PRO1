#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	
	int n,m;
	while(cin >> n >> m){
		double h = 0;
		for (int i = m+1; i <= n; ++i){
			h = h + 1.0/i;
		}
		cout << h << endl;
	}
}
		
