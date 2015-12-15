#include <iostream>
#include <string>
// CtCI Solution 1.8 - isString() checks to see if string1 is a subtstring of string2. Write code to check if string1 is a rotation of string2.
// Solution in C++

using std::string;
using std::cout;
using std::cin;
using std::endl;

// check if str1 is a substring of st2
bool isSubstring (string str1, string str2) {
	if (str2.find(str1) == string::npos)
		return false;
	else
		return true;
}


// check if str1 is a rotation of str2
bool isRotation(string str1, string str2) {

	if (str1.length() != str2.length()) 
		return false;
	
	else {
		int len = str1.length();
		int check = 1;
		string substr1;

		while (check < len) {
			substr1 = str1.substr(0, check);
			if (isSubstring(substr1, str2))
				++check;

			else {
				substr1 = str1.substr(0, check - 1);
				break;
			}

		}

		string substr2 = str1.substr(check - 1 , len - check + 1);
		// cout << substr2 << substr1 << endl;
		if ((substr2 + substr1) == str2)
			return true;
		else
			return false;

	}

}


int main() {

	cout << "Enter a word: ";
	string str1;
	cin >> str1;

	cout << "Enter another word, the program will check if it's a rotation of the first word: ";
	string str2;
	cin >> str2;


	if (isRotation(str2, str1) && str1 != str2)
		cout << "It is a rotation!" << endl;
	else
		cout << "It is not a rotation." << endl;


	return 0;
}