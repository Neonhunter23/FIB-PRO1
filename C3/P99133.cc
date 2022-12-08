#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	for (int j = n -1; j >= 0; --j){
		string reverse;
		reverse = v[j];
		int x = reverse.size();
		for (int t = x -1; t >= 0; --t){
			cout << reverse[t];
		}
		cout << endl;
	}
}
	
	
	
	
	
	
	
