#include <iostream>
#include <string>
// CtCI Problem 1.1 - Implement an Algorithm to determine if a string has all uniqure characters.

using std::string;
using std::cout;
using std::cin;
using std::endl;

// function to tesst for string of all unique characters
int uniqueChars(string str) {

	/* Create an array of 256 chars, where each index will represent an ASCII characters. 
	The value at the index represents if that character has been seen before.
	0 - has not been seen before, 1 - has been seen before. */
	int chars[256];
	for (int i = 0; i < 255; i++) {
		chars[i] = 0;
	}

	/* Go through each characters in the string.
	Check to see if character has been seen before. */
	for (int i = 0; i < str.length() - 1; i++) {
		if ((chars[str[i]]) == 0)
			chars[str[i]]++;
		else 
			return 0; // The count at an index is not zero, so we have seen this character before. 
	}

	return 1;
}

// A print function to tell user if the 
void printResults(int x) {
	
	if (x == 1)
		cout << " has all unique characters." << endl;
	else
		cout << " does not have unique characters." << endl;
	    
}

int main() {

	cout << "Enter a string and find out if it has all unique characters!" << endl;
	cout << "Upper and lowercase versions of the same letter count as different characters." << endl;

	string user;
	cin >> user;

	cout << user;
	printResults(uniqueChars(user));

}