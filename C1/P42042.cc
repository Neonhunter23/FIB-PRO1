#include <iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	if (c >= 'A' and c <= 'Z') cout << "uppercase" << endl;
	else cout << "lowercase" << endl;
	if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U' or c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'){
		cout << "vowel" << endl;
	}
	else cout << "consonant" << endl;
	
	
	
	
}
