#include <iostream>
#include <vector>
using namespace std;

double scalar_product (const vector<double>& u, const vector<double>& v){
	double producto = 0;
	for (int i = 0; i < u.size(); ++i){
		producto += (u[i]*v[i]);
	}
	return producto;	
}

int main(){
	int n;
	cin >> n;
	vector <double> u(n), v(n);
	for (int i = 0; i < n; ++i){
		cin >> u[i] >> v[i];
	}
	cout << scalar_product(u, v) << endl;
}
