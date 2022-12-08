#include <iostream>
#include <vector>
using namespace std;

vector<bool> ramps_pos(const vector<int>& v){
	int x0 = v[0];
	int x1 = v[1]; //los dos primeros elementos del vector
	vector<bool> positions(v.size());
	for (int i = 2; i < v.size(); ++i){
		if ((x0 < x1 and x1 < v[i]) or (x0 > x1 and x1 > v[i])){
			positions[i-2] = true; //si hay 3 elementos ordenador en orden ascendente o descendente, la posicion de la rampa empezara en el primer elemento
		}
			else positions[i-2] = false;
			x0 = x1; //actualizacion del tratado del vector
			x1 = v[i];
		}
		return positions;
}

int pot_conflictive(const vector<bool>& B){
	int c = 0; //contador de posiciones conflictivas
	for (int i = 0; i < B.size()-2; ++i){
		if (B[i] and B[i+1]) ++c;
		if (B[i] and B[i+2]) ++c;
	}
	return c;
}

int main(){
	int n;
	while(cin >> n){
	vector<int> num_list(n);
	for (int i = 0; i < n; ++i){
		cin >> num_list[i];
	}
	vector<bool> positions = ramps_pos(num_list);
	cout << "positions with a ramp:";
	for(int i = 0; i < positions.size(); ++i){
		if (positions[i] == 1) cout << " " << i;
	}
	cout << endl;
	cout << "potentially conflictive: " << pot_conflictive(positions) << endl;
	cout << "---" << endl;
	}
}
	
	

