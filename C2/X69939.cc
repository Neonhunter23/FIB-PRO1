#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2){
	if (time_2 > time_1) return time_2 - time_1; //normalmente el segunddo tiempo sera mayor que el primero
	else return (60 + time_2)- time_1; //cuando pasan mas de 60 segundos, se "reinicia"
	
}

int main(){
	int time1, time2, lapse;
	cin >> time1 >> time2;
	bool trobat = false; //esquema de busqueda raro (found an error instead of an element) (N I C E)
	lapse = time_lapse (time1, time2); //antes de iniciar los bucles, guardaremos en la variable lapse la primera resta
	time1 = time2; //actualizamos secuencia al elemento siguiente
	while (not trobat and cin >> time2 and time2 != -1){ //acaba en centinela
		if (lapse != time_lapse (time1, time2)){ //cuando haya un elemento fuera del tempo, la secuencia no es valida
			trobat = true;
			cout << 0 << endl;
		}
		time1 = time2; //actualizamos la secuencia
	}
	if (not trobat) cout << lapse << endl; //si no se han encontrado elementos a destempo, success
}
