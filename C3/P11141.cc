#include <iostream>
#include <vector>
using namespace std;

struct Student{
	int idn;
	string name;
	double mark;
	bool repeater;
};

void information (const vector<Student>& stu, double& min, double& max, double& avg){
	int n = stu.size();
	min = 10; //como la mayoria de notas seran menos de 10, la primera nota ya se actualizara, y asi succesivamente
	max = 0; //como la primera nota ya sera mayor que 0, se ira actualizando
	avg = 0;
	int count = 0;
	for (int i = 0; i < n; ++i){
		if (not stu[i].repeater and stu[i].mark != -1){
			if (stu[i].mark < min) min = stu[i].mark;
			if (stu[i].mark > max) max = stu[i].mark;
			avg += stu[i].mark; //acumulador de notas de todos los estudiantes validos
			++count; //numero de estudiantes validos (ojo no confundir con tamaño del vector)
		}
	}
	if (count != 0) avg /= double(count);
	else{
		avg = -1;
		min = -1;
		max = -1;
	}
}
	
