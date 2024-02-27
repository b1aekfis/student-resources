// This program uses an fstream object to write data to a file.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   fstream file;
   file.open("data.txt", ios::out | ios::app);   // write
   file << "Jones\n";
   file << "Smith\n";
   file << "Willis\n";
   file << "Davis\n";
   file.close();
   return 0;

}