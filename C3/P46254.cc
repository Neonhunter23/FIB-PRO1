#include <iostream>
#include <cmath>
using namespace std;

struct Point{
	double x, y; //cordenadas carteianas de cada punto
};

void read (Point& n){
	cin >> n.x >> n.y;
}

double dist (const Point& a, const Point& b){
	return sqrt((b.x-a.x) * (b.x-a.x)+(b.y-a.y) * (b.y-a.y)); 
}

int main(){
	Point a, b;
	read(a); //en lugar de hacer cin de las coordenadas de los puntos aqui, hare una funcion a parte para leerlas
	read(b);
	cout << dist(a, b) << endl;
}


