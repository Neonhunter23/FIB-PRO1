#include <iostream>
using namespace std;

int main(){
	int count = 0;
	char c;
	while (count >= 0 and cin >> c){
		if (c == '(') ++count;
		else --count;
	}
	if (count == 0) cout << "yes" << endl;
	else cout << "no" << endl;
}
