#include <iostream>
#include <string>
// CtCI Solution 1.5 - Implement a method to compress a string such that aabccccaaa -> a2b1c4a3, return the compressed string
// unless the compressed version is longer.
// Solution in C++

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::to_string;

// a function to return a compressed version of a string.
string compress(string str) {

	string output;
	int len = str.length();

	char tmp = str[0];
	int tmpcount = 1;
	bool written = false;

	for (int i = 1; i < len; i++) {

		if (str[i] == tmp) {
			tmpcount++;
			written = false;
		}

		else {
			output += tmp;
			output += to_string(tmpcount);
			tmp = str[i];
			tmpcount = 1;
			written = true;
		}

 }

		if (!written) {
			output += tmp;
			output += to_string(tmpcount);
		}

		// check to see if compressed or original string is longer, return shortest one.
		if ((output.length() >= len)) return str;
		else return output;
}


int main() {

	string str;
	cout << "Input a string and a compressed version of a string will be returned," << endl
		<< "if the compressed string is shorter." << endl;
	cin >> str;

	cout << compress(str) << endl;

	return 0;
}