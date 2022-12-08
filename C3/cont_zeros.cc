#include <iostream>
#include <vector>
using namespace std;

void zeros_counter (vector<int>& u, vector<int>& v) {
	int n;
	cin >> n;
	u = vector<int>(n);
	for (int i = 0; i < n; ++i) cin >> u[i];
	v = vector<int>(n);
	int counter = 0;
	for (int j = n - 1; j >= 0; --j) {
		if (u[j] == 0) ++counter;
		v[j] = counter;
	}
}

int main() {
	vector<int> u;
	vector<int> v;
	zeros_counter(u, v);
	for (int i = 0; i < v.size(); ++i) cout << v[i] << endl;
	
}
