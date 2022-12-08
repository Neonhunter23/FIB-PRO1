#include <iostream>
using namespace std;

void swap2 (int& a, int& b){
	int c = a;
	int d = b;
	b = c;
	a = d;
}



int main(){
	int x, y;
	cin >> x >> y;
	swap2(x, y);
	cout << x << " " << y << endl;
}
