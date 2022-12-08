#include <iostream>
#include <vector>
using namespace std;


int main() {
int n; 
while (cin >> n) {
	int sumaesquerra = 0, sumadreta=0;
	vector <int> v(n);
	int x = n-1, pos = 0; //primera y ultima posicion de la secuencia
	bool iguals = false, sumesq = true, sumdret = true;
	for (int i = 0; i < n; ++i) cin >> v[i];
	while (not (iguals) and pos < n) {
		if (sumesq) sumaesquerra += v[pos];
		if (sumdret) sumadreta += v[x];
		if (sumaesquerra < sumadreta) { 
		++pos; //pasamos a comprobar la siguiente posicion de breakeven
		sumdret=false;
		sumesq=true;
		}
		else if (sumaesquerra == sumadreta) { //caso true
		iguals = true;
		sumdret = sumesq = true;
		}
		else { //bajamos una posicion la x
		--x;
		sumesq = false;
		sumdret = true;
		}
	}
	if (iguals and pos <= x) cout << pos << " " << x << endl;
	else cout << "no" << endl;
	}
}
