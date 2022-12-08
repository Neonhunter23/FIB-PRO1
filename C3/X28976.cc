#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Player {
    string name;
    double score;     // mean score
};

struct Team {
    string tname;
    Player mvp;       // most valuable player
};

typedef vector<Team> League;

League read_data() {
    // your code here
    int n;
    cin >> n;
    League l(n);
    for (int i = 0; i < n; ++i){
		cin >> l[i].tname >> l[i].mvp.name >> l[i].mvp.score; //otra manera de declarar, con dos puntos
	}
	return l;
}

int main() {
    // your code here
    char c;
    double s;
    League l = read_data();
    while (cin >> c >> s){
		cout << "-- begin query" << endl;
		for (int i = 0; i < l.size(); ++i){
			if (l[i].tname[0] == c and l[i].mvp.score > s) cout << l[i].mvp.name << endl;
		}
		cout << "-- end query" << endl;
	}
}
