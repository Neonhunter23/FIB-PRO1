#include <iostream>
using namespace std;

int main(){
int x, y;
int z = 0;
cin >> x;
cout << "nombres que acaben igual que " << x << ":" << endl;
while (cin >> y){
	if( x%1000 == y%1000){
		cout << y << endl;
		++z;
	}	
}
cout << "total: " << z << endl;
}
