#include <iostream>
#include <fstream> // std::fstream
#include <sstream> // std::istringstream
#include "converter.hpp" // int_to_words_vi

// #include <string>

using namespace std;

int main(){

	fstream file_stream; // new a stream to using file
	file_stream.open("input.txt", ios_base::in); // open file to using input (stream) to program

	string line_str;
	long long int n;

	// getline stream into string + convert string to string stream and input (>>) to integer type
	// or using stoll convert string to integer type
	while(getline(file_stream, line_str)){

		istringstream ss(line_str);
		ss >> n;
		cout << n << ": " << int_to_words_vi(n)<<endl;

		// cout << line_str << ": " << int_to_words_vi((long long int)stoll(line_str)) << endl;
	}

	file_stream.close(); // close stream
	return 0;
}