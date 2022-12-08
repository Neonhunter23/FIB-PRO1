#include <iostream>
using namespace std;

//esquema de busqueda simple
int main(){
	int n, counter = 1;
	bool found = false;
	while (not found and cin >> n){
		if (n % 2 == 0){
			found = true;
			cout << counter << endl;
		}
		else ++counter;
	}
}
