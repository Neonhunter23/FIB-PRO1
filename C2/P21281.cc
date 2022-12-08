#include <iostream>
using namespace std;

void factor(int n, int&f, int&q){
	q = 0; 
	for (int d = 2; d <=n and d * d <= n; ++d){ //empezamos desde el 2 porque solo queremos factores primos, y el 1 divide a todos
		if (n % d == 0){
			int exp = 0;
			while (n % d == 0){
				++exp;
				n /= d; //el siguiente numero tambien sera un factor primo (exponente de la factorizacion)
			}
			if (exp > q){
				f = d;
				q = exp;
			}
		}
	}
	if (q == 0){
		f = n;
		q = 1;
	}
}


/*
int main(){
	int n;
	cin >> n;
	int f, q;
	factor(n, f, q);
	cout << f << " " << q << endl;
}
*/
