#include <iostream>
using namespace std;

struct Clock{
	int h;
	int m;
	int s;
};

Clock midnight(){
	Clock ini;
	ini.h = ini.m = ini.s = 0;
	return ini;
}

void increase (Clock& r){
	++r.s;
	if (r.s > 59){
		r.s = 0;
		++r.m;
	}
	if (r.m > 59){
		r.m = 0;
		++r.h;
	}
	if (r.h > 23){
		r.h = 0;
	}
}

void print (const Clock& r){
	if (r.h < 10) cout << '0';
	cout << r.h << ':';
	if (r.m < 10) cout << '0';
	cout << r.m << ':';
	if (r.s < 10) cout << '0';
	cout << r.s << endl;
}
