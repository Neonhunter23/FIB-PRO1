#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "The number of digits of " << n << " is ";  // así no necesito copia de n
    int count = 1;  // todos los números tienen al menos un dígito
    while (n / 10 > 0) {
        ++count;    // cuento ese nuevo dígito
        n = n/10;   // lo quito porque ya lo he contado
    }
    cout << count << '.' << endl;
}
