#include <iostream>
#include <vector>

using namespace std;

struct Swimmer {
    string name;
    string country;
    string style;
    double time;
};

typedef vector<Swimmer> Competition;

void read_data(Competition& v) {
    // ADD YOUR CODE HERE 
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
		Swimmer s;
		cin >> s.name >> s.country >> s.style >> s.time;
		v.push_back(s);
	}
}

int winner(const Competition& v, string style) {
    // ADD YOUR CODE HERE 
    int n = v.size();
    int k = -1;
    for (int i = 0; i < n; ++i){
		if(v[i].style == style and (k == -1 or (v[i].time < v[k].time))) k = i;
	}
	return k;
}

int main() {
    // ADD YOUR CODE HERE 
    Competition v;
    read_data(v);
    string style;
    while (cin >> style){
		int k = winner(v,style);
		if (k != -1) cout << "Winner " << style << ": " << v[k].name << " " << v[k].country << " " << v[k].time << endl;
		else cout << "Style " << style << " has not been run" << endl;
	}
}

