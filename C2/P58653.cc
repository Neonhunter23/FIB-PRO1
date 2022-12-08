#include <iostream>
using namespace std;

 void print_line(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "true" << endl;
         else cout << "false" << endl;
     }

bool uppercase (char c){
	if (c >= 'A' and c <= 'Z') return true;
	else return false;
}

bool lowercase (char c){
	if (c >= 'a' and c <= 'z') return true;
	else return false;
}

bool digit (char c){
	if (c >= '0' and c <= '9') return true; 
	else return false;
}

bool letter (char c){
	if (uppercase(c) or lowercase(c)) return true;
	else return false;
}

bool vowel (char c){
	if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') return true;
	else return false;
}

bool consonant (char c){
	if (letter(c) and not vowel(c)) return true;
	else return false;
}


int main(){
	char c;
	cin >> c;
	
	print_line(c,"letter",letter(c));
	print_line(c,"vowel",vowel(c));
	print_line(c,"consonant",consonant(c));
	print_line(c,"uppercase",uppercase(c));
	print_line(c,"lowercase",lowercase(c));
	print_line(c,"digit",digit(c));
}
