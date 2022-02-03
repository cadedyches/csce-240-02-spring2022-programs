//============================================================================
// Name        : DistrictInfo.cpp
// Author      : 
// Version     :
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

	string file_name = "data/Input.txt";
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



int main()
{
	//defines the variable district
	std::string district;
	std::cout << "Enter the name of the district: ";
	// Get input from user using std::cin and assign district a value
	std::getline(std::cin, district);
	std::cout << "You have chosen district " << district << "Here is some info about the represenative" << "!\n";

	string file_name = "data/Input.txt";

	cout << file_name << endl;

	return 0;
}
