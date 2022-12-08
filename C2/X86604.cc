#include <iostream>
#include <string>
using namespace std;

// Pre: c is a lowercase letter
// Post: returns  true when c is a vowel,  returns false otherwise
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'; 
}

void rec_vocals(string s, int i){
	if (i < s.size()){
	if (es_vocal(s[i])) {
		 rec_vocals(s, i + 1);
		 cout << s[i];
	 }
	 else{
		 rec_vocals(s, i + 1);
	 }
 }
 }
	
	void rec_consonants (string s, int i){
	if (i < s.size()){
	if ( not es_vocal(s[i])) {
		 cout << s[i];
		 rec_consonants(s, i + 1);
	 }
	else {
		rec_consonants(s, i + 1);
	}
 }
 }

// Pre: a lowercase letter sequence in the input
// Post: in the output appears  first input consonants in the same order, 
//       then vowels in reverse order
void consonantes_vocales() {
    string s;
    cin >> s;
    int i = 0;
    rec_consonants(s, i);
    rec_vocals(s, i);
    
}

int main() {
    consonantes_vocales();
    cout << endl;
}
