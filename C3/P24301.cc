#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
	int n = v1.size(); //tamaño del primer vector
	int m = v2.size(); //tamaño del segundo
	vector<int> res(n+m); //el tamaño de la fusion sera su suma
	for (int i = 0; i < n; ++i) res[i] = v1[i]; //la primera parte del resultado sera la del primer vector
	for (int i = 0; i < m; ++i) res[n+i] = v2[i]; //a partir del ultimo elemento del primero escribiremos el segundo
	return res;	
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> u(n);
	vector<int> v(m);
	for (int i = 0; i < n; ++i) cin >> u[i]; //creamos dos vectores y los declaramos
	for (int i = 0; i < m; ++i) cin >> v[i];
	vector<int> res = concatenation(u, v); //vector resultado
	for (int i = 0; i < res.size(); ++i) cout << res[i] << " ";
	cout << endl;
}
