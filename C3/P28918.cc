#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila; //para declarar matrices, lo mejor son estas dos lineas al principio
typedef vector<Fila> Matriu;

int main(){
	int n, m;
	cin >> n >> m; //filas y columnas
	
	Matriu mat (n, Fila(m)); //declaracion de la matriz
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin >> mat[i][j];
		}
	}
	string s; //paalbra que se nos pedira
	int x, y;
	while (cin >> s){
		if (s == "row"){ //dar la fila entera
			cin >> x;
			cout << "row " << x << ":";
			--x;
			for (int j = 0; j < m; ++j){
				cout << " " << mat[x][j]; //daremos los elementos de la fila x desde la columna 0, subiendo
			}
			cout << endl;
		}
				
		else if (s == "column"){ //dar la columna entera
			cin >> x;
			cout << "column " << x << ":";
			--x;
			for (int i = 0; i < n; ++i){
				cout << " " << mat[i][x]; //daremos los elementos de la columna x desde la fila 0, subiendo
			}
			cout << endl;
		}
		else{
			cin >> x >> y; //usaremos el else para el caso final
			--x; //nosotros damos las coordenadas de matrices empezando de 1, sin embargo, los vectores de vectores empiezan desde 0
			--y;
			cout << "element " << x+1 << " " << y+1 << ": " << mat[x][y] << endl;
		}
	}
}
