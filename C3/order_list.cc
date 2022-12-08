#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool compare(string a, string b){ 
	if(a.length() == b.length()) return a < b; //si son igual de largos, por orden alfabetico
	else return a.length() < b.length();
}

//pre:  v is ordered according to string length first and then 
//      by usual string order. All strings are different.   
//post: returns the position of s in v. 
//      If s  is not in v, returns -1 
int effi_search(const vector<string>& v, const string& s) {
    int left = 0;
    int ri = v.size() -1;
    while (left <= ri) {
		int mid = (left + ri)/2;
		if (v[mid] == s) return mid;
		else if (compare(s, v[mid])) ri = mid - 1;
		else left = mid + 1;
	}
	return -1;
}


int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    string s;
    while (cin >> s) 
        cout << effi_search(v, s) << endl;
}
