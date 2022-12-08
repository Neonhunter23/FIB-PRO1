#include <iostream>
using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	int coin = 0;
	for (int i = 0; i < r; ++i){
		for (int j = 0; j < c; ++j){
			char a;
			cin >> a; 
			coin = coin + a - '0';
		}
	} 
	cout << coin << endl;
}
