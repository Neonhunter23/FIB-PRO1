#include <iostream>
#include <vector>
using namespace std;
    
	
typedef vector<int> Fila;
typedef vector<Fila> Matriu;


//pre: n, m son mayores que cero
//post: retorna una matriz m x n leida por filas del input
Matriu leer_mat(int m, int n) {
    Matriu mat(m, Fila(n));
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){ 
            cin >> mat[i][j];
		}
	}
    return mat;
}


//pre: mat es una matriz no vacia
//post: escribe por filas en output la matriz mat
void escribir_mat(const Matriu& mat) {
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; ++i){
        cout << mat[i][0];
        for (int j = 1; j < n; ++j){
            cout << ' ' << mat[i][j];
        cout << endl;
		}
	}
}
    

//pre: i es el indice de una fila de a
//     j es un indice de una columna de b
//     numero columnas de a == numero filas b
//post: retorna el producto escalar de fila i de a por
//      columna j de b
int escalar_product(const Matriu& mat_a, const Matriu& mat_b, int i, int j) {
    int n = mat_a[0].size();
    int res = 0;
    for (int index = 0; index < n; ++index) res = res + mat_a[i][index]*mat_b[index][j];
    return res;
}
    
    
//pre: mat_a y mat_b son matrices con num.columnas(mat_a) ==  num.filas(mat_b)
//post retorna la matriz producto mat_a*mat_b
Matriu producto(const Matriu& mat_a, const Matriu& mat_b) {
    int m = mat_a.size(); //numero de filas de mat_a
    int n = mat_b[0].size(); //numero de columnas de mat_b
    Matriu mat_prod(m, Fila(n));
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            mat_prod[i][j] = escalar_product(mat_a, mat_b, i, j); 
		}
	}
    return mat_prod;
}

//en input hay tres numeros m , k y  n , una matriz m x k y una k x n
//escribe en output la matriz producto, que es m x n
int main() {
    int m, k, n;
    cin >> m >> k >>  n;
    Matriu mat_a = leer_mat(m, k);
    Matriu mat_b = leer_mat(k, n);
    Matriu mat_prod = producto(mat_a, mat_b);
    cout << endl;
    escribir_mat(mat_prod);
}
    
