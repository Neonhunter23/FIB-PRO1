#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool conte2(string s1, string s2, int i1){
	for (int i2 = 0; i2 < int(s2.length()); ++i2){
		if (s2[i2] != s1[i1+i2]) return false;
	}
	return true;
}
	
bool conte(string s1, string s2){
	for (int i1 = 0; i1 <= int(s1.length())- int(s2.length()); ++i1){
		if (conte2(s1, s2, i1)) return true;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	for (int i = 0; i < n; ++i){
		cout << v[i] << ":";
		for (int j = 0; j < n; ++j) if (conte(v[i], v[j])) cout << " " << v[j];
			cout << endl;	
	}
}

	
