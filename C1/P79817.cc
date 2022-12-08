#include <iostream>
using namespace std;

int main(){
	int a, b;
	while (cin >> a >> b){
		int pot = 1;
		for(int i = 0; i < b; ++i){
			pot *= a;
		}
		cout << pot << endl;
}
}
