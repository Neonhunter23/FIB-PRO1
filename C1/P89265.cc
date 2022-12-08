#include <iostream>
using namespace std;

int main(){
	double a, b, c, d;
	int x, y;
	char n;
	cin >> a >> b >> c >> d;
	
	if (a == c and b == d){
		n = '=';
	}
	else if (a >= c and b <= d){
		n = '1';
	}	
	else if (c >= a and d <= b){
		n = '2';
	}
	else n = '?';
	cout << n;
	
	x = max (a , c);
	y = min (b , d);
	
	if ( n == '1' or n == '='){
		cout << " , " << '[' << a << ',' << b << ']' << endl;
	}
	else if (n == '2'){
		cout << " , " << '[' << c << ',' << d << ']' << endl;
	}
	else if (n == '?'){
		if (c > b or a > d){
			cout << " , []" << endl;
		}
		else cout << " , " << '[' << x << ',' << y << ']' << endl;
	}
}
