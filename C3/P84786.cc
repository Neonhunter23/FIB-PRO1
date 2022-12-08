#include <iostream>
#include <cmath>
using namespace std;

struct Point{
	double x, y; //cordenadas carteianas de cada punto
};

struct Circle{
	Point center;
	double radius;
};

double dist (const Point& a, const Point& b){ //formula del primer ejercicio de la lista 9
	return sqrt((b.x-a.x) * (b.x-a.x)+(b.y-a.y) * (b.y-a.y)); 
}

void move (Point& p1, const Point& p2){ //movimiento de p1 respecto a p2
	p1.x += p2.x;
	p1.y += p2.y;
}

void scale (Circle& c, double sca){ //escala el circulo respecto a un numero real
	c.radius *= sca;
}

void move (Circle& c, const Point& p){ //mueve todo el circulo respecto a p
	move (c.center, p);
}

bool is_inside (const Point& p, const Circle& c){ //comprueba si el punto esta dentro del circulo 
	return (dist (p, c.center) < c.radius);
}
