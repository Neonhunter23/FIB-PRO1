#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
	vector <int> v(n);
	bool primero = true;
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	for (int i = v.size() - 1; i >= 0; --i){ //bucle descendente, empezando por el ultimo elemento
		if (not primero) cout << " ";
		primero = false;
		cout << v[i];
	}
	cout << endl;
}
}

