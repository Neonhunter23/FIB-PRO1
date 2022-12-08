#include <iostream>
#include <vector> 
using namespace std;


int main() {
    int n, sumizq =0, sumder = 0;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sumder = sumder + v[i];
    }
    bool found = false;
    if (sumder == 0 ) {
        found = true;
        cout << 1 << endl;
    }
    for (int i = 0; i < n and not found; ++i) {
        sumizq = sumizq + v[i];
        sumder = sumder - v[i];
        if (sumizq == sumder) {
            cout << i + 2 << endl;
            found = true;
        }
    }
    if (not found) cout << -1 << endl;

}
