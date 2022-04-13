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
#include <chrono>
//#include <boost/network/protocol/http/client.hpp>
using namespace std;
using namespace std::chrono;


void readFile()
{
	//reading the info from the file
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
			}//end of while

			out_myfile.close();

		} else {
			cout << "Unable to open file - " << out_file_name << endl;
		}// end if

		in_myfile.close();

	} else

	cout << "Unable to open input file - " << in_file_name << endl;
}//end of ReadandWrite method

void getInfo()
{
	//uses the input to determine the output
	//variables for searching the file
	string search;
	int set;

	//takes in the user input
	fstream myFile;
	myFile.open ("Input.txt",ios::out);
	cout << "What would you like to find?" << endl;
	cin >> search;
	//search the file for the specific infromation
	myFile.open("Input.txt",ios::in);
	if (myFile.is_open())
	 {

		 string line;
		 while(getline(myFile, line))
		 {
			 cout << line << "\n";
		 }
		 myFile.close();
	 }//end oIF

}//end of method get info



int main()
{
		//starting the session timer
		//using the now function
		auto start = high_resolution_clock::now();

		//after function
		auto stop = high_resolution_clock::now();

		//function
		auto duration = duration_cast<seconds>(stop - start);

	//sets up conditions to run infinite loop
	string input;
	int count = 0;
	string line;
	cout << "Please say Hello" << "!\n";
	//bool exit = false;
	//counts lines
	ifstream file("Input.txt");
	while(getline(file, line))
		count++;

		while(getline(std::cin, input))
		{
			//defines the variable district
				std::cout << "Hello! Thank you for choosing us! Enter the name of the district or type quit, Quit or q to stop: ";
						// Get input from user using std::cin and assign district a value
						std::getline(std::cin, input);
						std::cout << "You have chosen " << input << " Here is some info about the represenative" << "!\n";

											readFile();
											ReadandWrite();
											getInfo();

											cout << "The session on 4/13/22 lasted for: "
												 << duration.count() << " Seconds" << endl;
											cout << "Numbers of lines is :" << count << endl;

						if(input == "q" || "Quit" || "quit")
						{
							cout << "The session on 4/6/22 lasted for: "
								 << duration.count() << " Seconds" << endl;
							cout << "Numbers of lines is :" << count << endl;
							break;
						}

						//Gets the website url to download the info as the text file and parse it
						//boost::network::http::client client;
						//gives the url link to the program where to download from
					    //boost::network::http::client::request request("https://www.scstatehouse.gov/member.php?code=0428693131");
					   //reads the url and the website to download its content
					    //request << boost::network::header("Connection", "close");
					    //boost::network::http::client::response response = client.get(request);
					    //prints out the data into a file
					    //std::cout << body(response);
						string u;
						string q;
						string i;


		}//end of While loop
}//end of method main
