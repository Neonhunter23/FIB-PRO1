#include <iostream>
#include <vector>
using namespace std;

struct Game {
    string home;           // home team
    int shome;             // home team's score
    string visitor;        // visitor team
    int svisitor;        // visitor team's score
}; 

int scoring_ability(const vector<Game>& v, const string& team) {
     // your code
     int n = v.size();
     int points = 0;
     for (int i = 0; i < n; ++i){
		 if (v[i].home == team) points += v[i].shome;
		 if (v[i].visitor == team) points -= v[i].svisitor;
	 }
	 return points;
}

// Pre: n is a natural; the input has available the information of n games
// Post: returns a vector with n correctly initialized games
vector<Game> read_games(int n) {
    // your code
    vector<Game> G(n);
    n = G.size();
    for (int i = 0; i < n; ++i){
		cin >> G[i].home >> G[i].shome >> G[i].visitor >> G[i].svisitor;
	}
	return G;
}

int main() {
    // your code
    int n; 
    cin >> n;
    vector<Game> g = read_games(n);
    string s;
    while (cin >> s) cout << s << " " << scoring_ability(g, s) << endl;
}

