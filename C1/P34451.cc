#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x;
	int count = 0;
	while (cin >> y) {
		if (y % x == 0) ++count;
	}
	cout << count << endl;
}
