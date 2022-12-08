#include <iostream>
#include <vector> 
using namespace std;


//reads  vector u from cin
void read_vector(vector<int>& u) {
    int n = u.size();
    for (int i = 0; i < n; ++i) cin >> u[i];
}

//u is a non-empty vector
//writes vector u on cout
void write_vector(const vector<int>& u) {
    int n = u.size();
    cout << u[0];
    for (int i = 1; i < n; ++i) cout << ' ' << u[i];
    cout << endl;
}

//u is in increasing order, v is in decreasing order
//returns a vector w  with both u and v values in increasing order  
vector<int> i_merge(const vector<int>& u, const vector<int>&v) {
    int n = u.size();
    int m = v.size();
    vector<int> w(n + m);
    int i = 0;
    int j = m - 1;
    int k = 0;
    while (i < n and j >= 0){
		if (u[i] <= v[j]){
			w[k] = u[i];
			++i;
		}
		else{
			w[k] = v[j];
			--j;
		}
		++k;
	}
	while (i < n){
		w[k] = v[j];
		--j;
		++k;
	}
	return w;
}  

int main() {
    int n;
    cin >> n;
    vector<int> u(n);
    read_vector(u);
    int m;
    cin >> m;
    vector<int> v(m);
    read_vector(v);
    vector <int> w = i_merge(u, v);
    write_vector(w);
}
