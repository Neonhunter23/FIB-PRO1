#include <iostream>
using namespace std;

//pre: 0 < n and n < 10^9
//post: returns true if n is a triplets-number and false otherwise

bool triplet (int n, int x){
	if (n < 10) return n == x;
	else{
		return n%10 == x and triplet (n / 10, x);
	}
}

bool triplet_number(int n){
        // YOUR CODE HERE
        if (n < 1000 and n > 100) return triplet (n, n % 10);
        if (n % 1000 <= 999 and n < 100) return false;
        else if (triplet(n % 1000, n % 10)){
			return triplet_number(n / 1000);
		}
        return false;
}

int main(){
 int n;
 while (cin >> n){
  if (triplet_number(n)) cout << "TRUE" << endl;
  else cout << "FALSE" << endl;
 }
}
