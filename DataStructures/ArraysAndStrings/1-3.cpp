#include <iostream>
#include <string>
// CtCI Problem 1.3 - Decide if one string is a permutation of the other.
// Solution in C++

using std::string;
using std::cout;
using std::cin;
using std::endl;

// 
void countChars(int* chars, string str, int len) {

	for (int i = 0; i < len; i++) {
		chars[str[i]]++;
	}
	
}

// function to test if one string is a permutation of another string.
bool isPerm(string str1, string str2) {
	int len1 = str1.length();
	int len2 = str2.length();

	if (len1 != len2) return 0; // If the two strings do not have an equal # of chars, they cannot be permutations of each other.

	// Create to int arrays to count how many times we see each char. 
	int chars1[256] = {};
	int chars2[256] = {};
	
	countChars(chars1, str1, len1);
	countChars(chars2, str2, len2);

	for (int i = 0; i < 255; i++) {
		if (chars1[i] != chars2[i]) return false;
	}

	return true;
}



int main() {

	string str1;
	string str2;

	cout << "Test if two strings are permutations of each other!" << endl;
	
	cout << "Enter first string:" << endl;
    cin >> str1;

	cout << "Enter second string:" << endl;
	cin >> str2;

	if (isPerm(str1, str2))
		cout << "They are permutations!" << endl;
	else
		cout << "They are not permutations!" << endl;

	return 0;
}