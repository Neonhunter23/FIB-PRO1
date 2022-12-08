#include <iostream>
#include <vector>
using namespace std;

int position (double x, const vector<double>& v, int left, int right){
	if (left > right) return -1;
	int half = (left + right)/2;
	if (x < v[half]) return position (x, v, left, half-1);
	if (x > v[half]) return position(x, v, half+1, right);
	return half;
}
