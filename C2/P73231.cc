#include <iostream>
using namespace std;

int max4 (int a, int b, int c, int d){
	int max = a;
	if (b >= max) max = b;
	if (c >= max) max = c;
	if (d >= max) max = d;
	return max;
}


int main(){
	int w, x, y, z;
	cin >> w >> x >> y >> z;
	
	cout << max4(w, x, y, z) << endl;
}
