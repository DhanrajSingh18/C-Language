#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  // Create a text file
  ofstream MyWriteFile("filename.txt");

  // Write to the file
  MyWriteFile << "Hare Krishna Krishna Krishna Hare Hare Hare Ram Ram Ram Hare Hare";
 
  // Close the file
  MyWriteFile.close();

  // Create a text string, which is used to output the text file
  string myText;

  // Read from the text file
  ifstream MyReadFile("filename.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) 
  {
    // Output the text from the file
    cout << myText;
  }

  // Close the file
  MyReadFile.close();
}

