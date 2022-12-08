#include <iostream>
using namespace std;

int main(){
	int r, c;
	cin >> r >> c;
	int coin = 0;
	int par = 0;
	for (int i = 1; i <= r; ++i){
		for (int j = 1; j <= c; ++j){
			char a;
			cin >> a;
			coin = coin + (a - '0');
			if (i % 2 != 0) par = par + (a - '0');
		}
	}
	cout << coin << " " << par << endl;
}
			
