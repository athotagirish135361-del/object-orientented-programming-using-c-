#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string filename = "example.txt"; 
	string data;

    ofstream outFile(filename, ios::out); 
    if (outFile) {
        outFile << "Hello, this is a file handling example in C++.\n";
        outFile << "File handling allows reading and writing to files.\n";
        outFile.flush();  
        outFile.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1; 
    }
    
    
    ifstream inFile(filename); 
    if (!inFile) {
        cout << "Error: File does not exist or cannot be opened." << endl;
        return 1; 
    }

    
    cout << "Reading from file: " << endl;
    
    while (getline(inFile, data)) { 
        cout << data << endl;  
    }
    inFile.close();
    return 0;
}
