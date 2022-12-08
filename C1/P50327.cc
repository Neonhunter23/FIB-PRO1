#include <iostream>
using namespace std;

int main(){
	int x;
	cin >> x;
	if (x == 0) cout << "0" << endl; // caso extremo
	else{
		while (x != 0){
			cout << x%10; // imprimimos el ultimo digito
			x /= 10; //dividimos por 10, y el penultimo elemento se convertirá en el ultimo
		}
		cout << endl;
		}
}
