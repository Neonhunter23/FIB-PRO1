#include <iostream>
using namespace std;

int main(){
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	if ((a2 >= a1) and (b1-a2 >= 0)) {
		if (b2 <= b1) cout << '[' << a2 << ',' << b2 << ']' << endl;
		else if (b1 < b2) cout << '[' << a2 << ',' << b1 << ']' << endl;
	}
	else if (a1 > a2 and b2-a1 >= 0){
		if (b2 <= b1) cout << '[' << a1 << ',' << b2 << ']' << endl;
		else if (b1 < b2) cout << '[' << a1 << ',' << b1 << ']' << endl;
	}
	else cout << "[]" << endl;
}

