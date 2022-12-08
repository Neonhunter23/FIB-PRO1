#include <iostream>
using namespace std;
//version poco eficiente
int main(){
	cout.setf(ios::fixed);
	cout.precision(10);
	
	int n, m;
	double hn = 0, hm = 0;
	while (cin >> n >> m){	//dentro del while se tratará a los dos numeros
		for (int i = 1; i <= n; ++i){ //el for tiene que empezar desde 1 si o si, porque si no haria 1/0
			hn = 1.0/i + hn;
		}
		for (int i = 1; i <= m; ++i){
			hm = 1.0/i + hm;
		}
	}
	cout << hn - hm << endl;
	}

