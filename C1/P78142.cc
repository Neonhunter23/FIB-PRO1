#include <iostream>
using namespace std;

int main(){
cout.setf(ios::fixed);
cout.precision(2);

	double a;
	double count = 0, suma = 0;
	while(cin >> a){
		suma += a;
		++count;
		}
		cout << suma/count << endl;
}
