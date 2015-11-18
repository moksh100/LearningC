#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
    string input;
    std::string firstname = "";  
    std::string lastname = "";  
    int age = 0;  
    cout << "First name: \t";
    getline(cin, firstname);   
    cout << "Last name: \t";
    getline(cin, lastname);
    cout << "Age: \t";
    getline(cin, input);
    stringstream(input) >> age;

	char* x = new char[firstname.length() + lastname.length()+age  + 32];

	sprintf(x, "First Name: \t %s \nLast Name: \t %s \nAge: \t %d \n", firstname.c_str(), lastname.c_str(), age );

	string str = x;
	delete[] x;

    myfile.open ("output_file.txt");
    myfile << str;   
    myfile.close();
    return 0;
}
