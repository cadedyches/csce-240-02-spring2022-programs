/*
 * main.cpp
 *
 *  Created on: Apr 7, 2022
 *      Author: Dyches, Cade
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Check if a is less
// return the value
template <typename V>
bool less_than(V a, V b) {
	return a < b;
	}

// Simple compare method
//compares a and b
//compares c and d
void TemplateSimple() {

	cout << "Simple template usage" << endl;

	int a = 20, b = 30;
	cout << "Comparing int - a = " << a <<
			", b = " << b <<
			", result = " << less_than(a, b) << endl;

	float c = 20.2, d = 20.7;
	cout << " Comparing float - c = " << c <<
			", d = " << d <<
			", result = " << less_than(c, d) << endl;
	cout << "Comparing float - d = " << d <<
			", c = " << c <<
			", result = " << less_than(d, c) << endl;

	string w1 = "Alpha", w2 = "Beta";
	cout << " Comparing string - w1 = " << w1 <<
			", w2 = " << w2 <<
			", result = " << less_than(w1, w2) << endl;
	cout << " Comparing string - w2 = " << w2 <<
			", w1 = " << w1 <<
			", result = " << less_than(w2, w1) << endl;


}
// Do a sum of the members in the vector
template <typename T>
//find the sum and return the value
T sum(const vector<T>& v) {
	T resul = 0;
	for (T elem : v)
	resul = resul + elem;
	return resul;
}
int main(int argc, char *argv[]) {
	cout << "Class on Templates" << endl; // for Class 23
	//run the program for comparing two vectors
	char command = 0;
	string str = "";

	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\n running the program.");
		command = '0';
	} else {
		// run this
		command = *argv[1];

		cout << "Running the command  " << command << endl;
	}

	// Now execute based on command

	if (command == '0')
		// Show simple templates
		TemplateSimple();

	return 0;
}

