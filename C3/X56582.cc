#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    string title;       
    int nb_pag;         // number of pages
};

struct Author {
    string name;        
    Book bestseller;
};

typedef vector<Author> Library;

Library read_data() {
    // your code here
    int n;
    cin >> n;
    Library l(n);
    Author a;
    Book b;
    for (int i = 0; i < n; ++i){
		cin >> a.name >> b.title >> b.nb_pag; //leemos el nombre del autor, el titulo del libro y su numero de paginas
		a.bestseller = b; //guardamos el bestseller en el libro
		l[i] = a; //guardamos el autor en el vector
	}
	return l;
}

int main() {
    // your code here
    Library l = read_data(); //declaramos la libreria al principio
    char c;
    int p;
    int n = l.size();
   
    while (cin >> c >> p){
		cout << "-- begin query" << endl;
		for (int i = 0; i < n; ++i){
			Book b = l[i].bestseller;
			
			if (b.title[0] == c and b.nb_pag > p) cout << l[i].name << endl; //si el bestseller empieza por esa letra y tiene mas paginas que el numero, saldra impreso
		}
			cout << "-- end query" << endl;
	}
}
