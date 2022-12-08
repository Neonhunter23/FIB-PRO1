#include <iostream>
#include <vector>
using namespace std;


//pre: n > 0
//post: retorna un vector de tamanno n leido de la entrada
vector<int> lee_vector(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}


//pre:---
//post: valores del vector escritos en output
void escribir_vector(const vector<int>& v) {
    int n = v.size();
    cout << v[0];
    for (int i = 1; i < n; ++i)
    cout << ' ' << v[i];
    cout << endl;
}



// Pre: 0 <= iz <= mit <= de < v.size() i v[iz..mit] y v[mit+1..de], por separado, 
//      estan ordenados de menor a mayor
// Post: los valores de v[iz..de] son los iniciales, pero ordenados de menor a
//       a mayor y el resto de elementos de v no ha cambiado
void fusionar(vector<int>& v, int iz, int mit, int de) {
    vector<int> aux(de - iz + 1);
    int i = iz;      //indice para primer segmento
    int j = mit + 1; //indice para segundo segmento
    int k = 0;       //indice para aux
    while (i <= mit and j <= de) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        }
        else {
            aux[k] = v[j];
            ++j;
        }
        ++k;
    }
    while (i <= mit) {
        aux[k] = v[i];
        ++k;
        ++i;
    }
    while (j <= de) {
        aux[k] = v[j];
        ++k;
        ++j;
    }
    //volcamos el resultado de la fusion en v[iz..de]
    int s = aux.size(); //s es de - iz + 1
    for (k = 0; k < s; ++k) v[iz + k] = aux[k];
}


// Pre: iz y de son posiciones validas de v 
// Post: los valores  de v[iz..de] son los  iniciales, pero ordenados de menor a mayor
void mergesort(vector<int>& v, int iz, int de) {
    if (iz < de) {
        int mit = (iz + de)/2;
        mergesort(v, iz, mit);
        //por hipotesis de induccion, v[iz..mit] tiene los valores originales ordenados
        mergesort(v, mit + 1, de);
        //por hipotesis de induccion, v[mit+1..de] tiene los valores originales ordenados
        fusionar(v, iz, mit, de);
    }
}



int main() {
   int n;
   cin >> n;
   vector<int> v = lee_vector(n);
   mergesort(v,0,v.size() - 1);
   escribir_vector(v);
}

