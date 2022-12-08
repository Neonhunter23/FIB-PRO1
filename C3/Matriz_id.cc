#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

//pre: mat es no vacía
//post: escribe por filas mat, separando con blancos los elementos de cada fila
void escribir_mat(const Matriu& mat) {
    int m = mat.size(); //num. filas
    int n = mat[0].size(); // num. columns
    for (int i = 0; i < m; ++i) {
        cout << mat[i][0];
        for (int j = 1; j < n; ++j){ 
            cout << ' ' << mat[i][j];
            cout << endl;
        }
    }
 }

    //pre: n > 0
    //retorna la matriz n x n identidad
    Matriu construye_id(int n) {
        Matriu id = Matriu(n, Fila(n));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                if (i == j) id[i][j] = 1;
                else id[i][j] = 0;
			}
		}
        return id;
    }
 

    int main() {
        const int N = 3;
        Matriu mat_id = construye_id(N);
        escribir_mat(mat_id);
    }
