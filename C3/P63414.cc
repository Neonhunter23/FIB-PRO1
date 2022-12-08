#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, fr;
	cin >> n;
	vector<int> A(1001);
	for(int i = 0; i < n; ++i){
		cin >> fr;
		fr -= 1000000000; //solo importan los 4 numeros de menos peso
		++A[fr]; //sumamos 1 a cada contador de numero
	}
	for (int i = 0; i < A.size(); ++i){
		if (A[i] != 0) cout << 1000000000 + i << " : " << A[i] << endl;
	}
}
	
	
	
	

