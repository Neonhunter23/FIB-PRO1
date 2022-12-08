#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y){
	x *= x;
	y *= y;
	return sqrt(x+y);
}

int main(){
	double a, b;
	cin >> a >> b;
	cout << dist_or(a, b) << endl;
	
	
	
	
	
	
}
