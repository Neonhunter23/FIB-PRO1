#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 'Subject' stores information about a subject taken by a student: 
// name of the subject and obtained grade
struct Subject {
  string name;
  int grade;
};

// 'Student' stores information about a student: id number, university name, 
// average grade and list of taken subjects with obtained grades. 
struct Student {
  string dni;
  string school;
  float average;
  vector<Subject> subjects;
};

/// YOU CAN ADD EXTRA FUNCTIONS HERE IF YOU NEED TO                             

// Reads input data and stores info for each student in a struct 'Student'.  
// It also computes and stores the average mark for each student.  
// Returns a vector with all students. 
// Each 'Student' struct should be added to the vector using "push_back".       
vector<Student> read_students() {
	vector<Student> v(0);
	Student s;
	while (cin >> s.dni >> s.school){
		vector<Subject> w(0);
		Subject a;
		double avg = 0.0;
		while (cin >> a.name and a.name != "."){
			cin >> a.grade;
			avg += a.grade;
			w.push_back(a);
		}
		s.subjects = w;
		s.average = avg/w.size();
		v.push_back(s);
	}
	return v;                                                         
}

// Compare two students and return true if s1 goes before s2 in
// the required ordering (sorted by school name, average if same
// school, dni if same school and average)
bool compare_students(const Student &s1, const Student &s2) {
	bool cambio = false;
	if (s1.school < s2.school) cambio = true;
	else if (s1.school == s2.school){
		if (s1.average < s2.average) cambio = true;
		else if (s1.average == s2.average){
			if (s1.dni < s2.dni) cambio = true;
		}
	}
	return cambio;
}

// Print sorted student information
// For each student, print school name, average grade, dni, list of subjects and marks  
void print_students(const vector<Student> &stds) {
  for (int i = 0; i < stds.size(); ++i){
	  cout << stds[i].school << " " << stds[i].average << " " << stds[i].dni;
	  for (int j = 0; j < stds[i].subjects.size(); ++j){
		  cout << " " << stds[i].subjects[j].name << " " << stds[i].subjects[j].grade;
	  }
	  cout << endl;
  }                                                           
}

int main() {
  vector<Student> stds = read_students();
  sort(stds.begin(), stds.end(), compare_students);
  print_students(stds);
}

