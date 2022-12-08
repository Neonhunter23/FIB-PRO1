#include <iostream>
#include <vector>
using namespace std;

typedef vector<bool> Fila;
typedef vector<Fila> Tablero;

void threats_dir (const Tablero& tab, int f1, int c1, int dx, int dy){
	int n = tab.size();
	int m = tab[0].size();
	
	int i = f1+dx;
	int j =c1+dy;
	
	bool found = false;
	while (not found and i < n and i >= 0 and j < m and j >= 0){
		if (tab[i][j]){
			cout << '(' << f1+1 << ',' << c1+1 << ")<->(" << i+1 << ',' << j+1 << ')' << endl;
			found = true;
		}
		i += dx;
		j += dy;
	}
}

void find_threats (const Tablero& tab, int f1, int c1){
	threats_dir(tab, f1, c1, 1, 1); //abajo a la derecha
	threats_dir(tab, f1, c1, 1, -1); //abajo a la izquierda
	threats_dir(tab, f1, c1, -1, 1); //arriba a la derecha
	threats_dir(tab, f1, c1, -1, -1); //arriba a la izquierda
}

int main(){
	int n, m;
	cin >> n >> m;
	
	Tablero tab = Tablero(n, Fila(m));
	
	char c;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> c;
			tab[i][j] = (c == 'X');
		}
	}
	
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			if (tab[i][j]) find_threats(tab, i, j);
		}
	}
}

