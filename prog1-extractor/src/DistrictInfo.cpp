//============================================================================
// Name        : DistrictInfo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//#include <boost/network/protocol/http/client.hpp>
#include <iostream>
#include <string>
#include <fstream>
//#include <boost/network/protocol/http/client.hpp>
using namespace std;

void readFile()
{
	cout << "\n*** Reading Input ***\n\n";

	std::string file_name = "data/Input.txt";
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
	std::string in_file_name =  "data/Input.txt";
	std::string out_file_name = "data/output.txt";
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
	//defines the variable district
	std::string district;
	std::cout << "Enter the name of the district: ";
	// Get input from user using std::cin and assign district a value
	std::getline(std::cin, district);
	std::cout << "You have chosen " << district << " Here is some info about the represenative" << "!\n";
	//Gets the website url to download the info as the text file and parse it
		//boost::network::http::client client;
		//gives the url link to the program where to download from
	    //boost::network::http::client::request request("https://www.scstatehouse.gov/member.php?code=0428693131");
	   //reads the url and the website to download its content
	    //request << boost::network::header("Connection", "close");
	    //boost::network::http::client::response response = client.get(request);
	    //prints out the data into a file
	    //std::cout << body(response);
	readFile();
	ReadandWrite();
	return 0;
}
