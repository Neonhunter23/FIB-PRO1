#include <iostream>
using namespace std;

int main(){
    int d, n, t; //d = gastos, n = euros ahorrados, t = numero de semanas
    cin >> d >> n >> t;
        int c = 0;
    for (int i = 0; i < t; ++i) { // en n semanas, cada semana me daran la paga
                int a;
        cin >> a;
                n = n - d + a; // dinero total = dinero total -gastos +paga
        if (n > 0) ++c;	// si no me gasto toda la paga, he terminado la semana con un balance positivo
    }
    cout << c << endl;
}
