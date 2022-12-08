#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	int A, B, C;
	C = a;
  if (b > a) {
    if (c > b) {
      C = c;
      B = b;
      A = a;
    }else if (c < b and c > a) {
      C = b;
      B = c;
      A = a;
    }else {
      C = b;
      B = a;
      A = c;
    }
  }else {
    if (c > a) {
      C = c;
      B = a;
      A = b;
    }else if (c < a and c > b) {
      B = c;
      A = b;
    }else {
      B = b;
      A = c;
    }
  }
  
  if (s == "ABC") cout << A << ' ' << B << ' ' << C << endl;
  if (s == "ACB") cout << A << ' ' << C << ' ' << B << endl;
  if (s == "BAC") cout << B << ' ' << A << ' ' << C << endl;
  if (s == "BCA") cout << B << ' ' << C << ' ' << A << endl;
  if (s == "CAB") cout << C << ' ' << A << ' ' << B << endl;
  if (s == "CBA") cout << C << ' ' << B << ' ' << A << endl;
}
