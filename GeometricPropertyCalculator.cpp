//============================================================================
// Name        : GeometricPropertyCalculator.cpp
// Author      : Dyches, Cade
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

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



int main(int argc, char* argv[])
{
	char command = 0;
	string str = "";

	cout << "Program name : " << argv[0] << endl;
	if(argc == 4)
	{
		printf("\nNo command was entered. Will be starting with 1 by default.");
	}	else  {
		command = *argv[1];
		cout << "Command to run is -" << command << endl;
	}
	if(command == '1')
	{
		printf("\nFinding the area.");


	} else if(command == '2') {
		printf("\nFinding the perimeter");
	}

	// fstream fileOut ("output.txt", ios::in | ios::out | ios::app);
	// fileOut <<

	return 0;
}
