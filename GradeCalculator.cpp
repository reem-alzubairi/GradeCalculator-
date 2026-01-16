#include<iostream>
using namespace std;
int main() {
	double grade;
	cout << "Enter the grade" << endl;
	cin >> grade;
	if (grade >= 90 && grade <= 100) {
		cout << "Excellent" << endl;
	}
	else if (grade >= 80 && grade < 90) {
		cout << "Very Good" << endl;
	}
	else if (grade >= 70 && grade < 80) {
		cout << "Good" << endl;
	}
	else if (grade >= 60 && grade < 70) {
		cout << "Acceptable" << endl;
	}
	else if (grade >= 50 ) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
	}

	return 0;
}
