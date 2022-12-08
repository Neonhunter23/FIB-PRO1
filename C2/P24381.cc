#include<iostream>
using namespace std;

void cross (int n, char c){
	for(int i = 0; i < n; ++i){
		if (i == n/2) { //en los pares es un poco extraño porque son ints
			for (int j = 0; j < n; ++j) cout << c; //fila central
		}
		else{
			for (int j = 0; j < n/2; ++j) cout << ' '; //fila superior e inferior
			cout << c;
		}
		cout << endl;
	}	
}

int main(){
int n;
char c;
cin >> n >> c;
cross(n, c);	
}
