/*The fstream library allows us to work with files.
To use the fstream library, include both the standard <iostream> AND the <fstream> header file:*/

/*----------✍------------
Both 'ifstream' and 'fstream' can be used to read from a file.
  Both 'ofstream' and 'fstream' can be used to write to a file.
  Use the '<<' operator to write data to a file.
  Use the 'getline(sourceofdata, whattoread)' function to read a line from a file. Here 
  'sourceofdata' is filename and 'whattoread' is line.
  Iterate getline with loops to read multiple lines.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //using 'ofstream'
    ofstream writeFile("file1.txt");
    //datatype variable("value"); kindof 😁.
    writeFile<<"Writing to this file with the use of 'ofstream'.";
    writeFile.close();
    //better to close a file to ensure data is properly written as well as clear it from RAM.

    //using 'ifstream'
    ifstream readFile("file1.txt");
    string line;
    while(getline(readFile, line)){
        cout<<line;
    }
    readFile.close();
    cout<<"\n\n";

    //using 'fstream'
    fstream writereadfile2("file2.txt", ios::in | ios::out);
                                                //Use '| ios::app' in above line to not override and
                                                //append to the file.
    
    writereadfile2<<"Writing to this file with the use of 'fstream'.";
    
    writereadfile2.seekg(0); //To move pointer/cursor to beginning before reading the file.
                           // It is required when reading with 'fstream'.
    string line_;
    while(getline(writereadfile2,line_)){
        cout<<line;
    }
    writereadfile2.close();
    
    
    return 0;
}