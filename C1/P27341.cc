#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int x, y;
	while (cin >> x >> y){
		int r = 0;
		for (int i = x; i <= y; ++i){
			r += pow(i, 3);
		}
		cout << "suma dels cubs entre " << x << " i " << y << ": " << r << endl; 
	}	
}
