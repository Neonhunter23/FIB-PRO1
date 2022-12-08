#include <iostream>
#include <vector>
using namespace std;


int main(){
	int n;
	while (cin >> n){
		vector<int> v(n);
		for (int i = 0; i < n; ++i) cin >> v[i];
		int count = 0;
		for (int i = 0; i < n; ++i){
			int acc = 0;
			int j = i - 1;
			while (j >= 0 and acc < v[i]){
			acc += v[j];
			--j;
			}
			if (acc == v[i]) ++count;
		}
		cout << count << endl;
	}	
}

