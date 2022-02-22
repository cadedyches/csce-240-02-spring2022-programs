

/*
 * Shape.cpp
 *
 *  Created on: Feb 9, 2022
 *      Author: Dyches, Cade
 */

#include "Shape.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

Shape::Shape() {
	// TODO Auto-generated constructor stub

}

Shape::~Shape() {
	// TODO Auto-generated destructor stub
}

void getArea()
{

}//end of method get area

void getPerimeter()
{

}//end of get perimeter

void getErrorMessage()
{

}//end of get error message


void readFile()
{
	cout << "\n*** Reading Input ***\n\n";

	string file_name = "data/input.txt";
	string line;

	ifstream myfile (file_name);
	if(myfile.is_open())
	{
		while ( getline (myfile, line) )
		{
			cout << line << '\n';

		}//end of INNER while

		myfile.close();
	} else
		cout << "Unable to read file -" << file_name << endl;
}//end of readFile

void ReadandWrite()
{
	string in_file_name =  "data/input.txt";
	string out_file_name = "data/output.txt";
	string line;

	ifstream in_myfile (in_file_name);
	ofstream out_myfile (out_file_name);
	if (in_myfile.is_open())
	{
		if(out_myfile.is_open())
		{
			while ( getline (in_myfile, line) )
			{
				cout << "\t reading.. " << line << endl;
				string out_line = "A" + line + '\n';
				out_myfile << out_line;
			}

			out_myfile.close();

		} else {
			cout << "Unable to open file - " << out_file_name << endl;
		}// end if

		in_myfile.close();

	} else

	cout << "Unable to open input file - " << in_file_name << endl;
}


int main()
{
	cout << "Find the perimeter or area, press 1 for perimeter or 2 for the area" << endl;
}//end of method main



