#include <iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	if (c >= 'A' and c <= 'Z') cout << char(c - 'A' + 'a') << endl;
	else cout << char(c - 'a' + 'A') << endl;
	
	
}
