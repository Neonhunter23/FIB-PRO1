#include <iostream>
#include <vector>
using namespace std;
    
    //pre: una secuencia con los años de naciemiento de una poblacion desde 1991
           //en el canal de entrada
    //post: escribe la frecuencia de nacimientos de cada año
    int main() {
        const int MIN = 1991;   
        const int MAX = 2020;
        vector<int> counters(MAX - MIN + 1); //+1 por el formato del vector, que empieza desde el elemento 0 hasta el 29
        for (int i = 0; i < MAX - MIN + 1; ++i) counters[i] = 0; //inicializamos todos los contadores a 0
        int year;
        while (cin >> year) ++counters[year - MIN];
        for (int i = 0; i < MAX - MIN + 1; ++i) 
           cout << "El numero de personas nacidas en " << MIN + i 
                << " es " << counters[i] << endl; 
    }
