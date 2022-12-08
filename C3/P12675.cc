#include <iostream>
#include <vector>
using namespace std;

int common_elements(const vector<int>& X, const vector<int>& Y){
	int comuns = 0;
	int x = X.size();
	int y = Y.size();
	int i = 0;
	int j = 0;
	while (i <= x-1 and j <= y-1) {
		if (X[i] == Y[j]) { //se van comparando elemento a elemento
			++comuns;
			++i;
			++j;
		}
		else if (X[i] > Y[j]) ++j; //no sé el porqué de estas condiciones
		else if (X[i] < Y[j]) ++i;
	}

	return comuns;
}

int main(){
	int a, b;
	while (cin >> a >> b){
		vector<int> u(a);
		for (int i = 0; i < a; ++i){
			cin >> u[i];
		}
		vector<int> v(b);
		for (int i = 0; i < b; ++i){
			cin >> v[i];
		}
		cout << common_elements(u, v) << endl;
	}
}
