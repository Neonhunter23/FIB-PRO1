#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Board;

// Reads a board of size nxn from cin, and returns it.
Board read_board(int n) {
   Board b(n, Row(n));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
          cin >> b[i][j];
      }
   }
   return b;
}

// writes to cout that there is a menace (i1,j1) <--> (i2,j2)
void write_menace(int i1, int j1, int i2, int j2) {
   cout << "(" << i1 << "," << j1 << ") <--> (" << i2 << "," << j2 << ")" <<endl;
}

// searches and writes menaces for cell ib,jb in board b
void find_menaces(const Board & b, int ib, int jb) {
   int i = ib + 1, j = jb - 1;
   bool found = false;
   while (not found and i < b.size() and j >= 0) {
	   if (b[i][j] == 'B') {
	   write_menace(ib, jb, i, j);
	   found = true;
   }
   ++i;
   --j;
	}
	i = ib + 1;
	j = jb + 1;
	found = false;
	while (not found and i < b.size() and j < b[0].size()){
		if (b[i][j] == 'B'){
			write_menace(ib, jb, i, j);
			found = true;
		}
		++i;
		++j;
	}
}
	
// searches and writes menaces for all cells in board b
void check_board(const Board& b) { 
   for (int i = 0; i < b.size(); ++i) {
	   for (int j = 0; j < b.size(); ++j) {
		   if (b[i][j] == 'B') find_menaces(b, i, j);
	   }
   }
}

int main() {
   int n;
   int bn = 1;
   while (cin >> n) {
      Board b = read_board(n);
      cout << "board num " << bn << endl;
      ++bn; 
      check_board(b);
      cout << "----------------" << endl;
   }
}
