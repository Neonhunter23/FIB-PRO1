#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<double>& v){
	int n = v.size();
	for (double i = 1; i < n; ++i) {
		double x = v[i];
		double j = i;
		while (j > 0 and v[j-1] > x) {
			v[j] = v[j-1];
			--j;
		}
		v[j]= x;
	}
}
