#include <iostream>
using namespace std;

int main(){
	int first, second;
	cin >> first >> second;
	int third;
	bool pico = false;
	while (not pico and cin >> third and third != 0){
		if (3143 < second and first < second and third < second){
			pico = true;
		}
		first = second;
		second = third;
	}
	if (pico) cout << "YES" << endl;
	else cout << "NO" << endl;
}
