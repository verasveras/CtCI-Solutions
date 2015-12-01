#include <iostream>
#include <string>
// CtCI Problem 1.4 - Given a string with enough buffer space at the end and true length of the string*, write in %20 at every blank space in the string.
// Solution in C++
// * - True length of the string is understood as the length of everything except the buffer at the end. Ex, the true lenght of "cool cat  " is 8.

using std::string;
using std::cout;
using std::cin;
using std::endl;

// function to change blank spaces in a string to '%20', assuming the string has a buffer at the end to fit new extra spaces.
void add20s(char *str, int len) {
	 
	int buffer = strlen(str) - 1;
	len--;

	while (buffer != len) {


		if (str[len] != 32) {     
			str[buffer--] = str[len--];
		}

		else {
			str[buffer--] = '0';
			str[buffer--] = '2';
			str[buffer--] = '%';
			len--;
		}
	}
	
}

int main() {


	char str[30];
	int len;

	cout << "Enter a string of multiple words with spaces between words." << endl
		<< "Add two extra spaces at the end for every space between words." << endl
		<< "The program mmwill add %20s in the spaces between words." << endl
		<< "Limit your input to 20 characters total or the program will crash" << endl;
	cin.getline(str, sizeof(char) * 30);
	cout << endl;

	cout << "Input the length of the sring, which is the length minus the buffer at the end." << endl;
	cin >> len;
	cout << endl;


	add20s(str, len);
	cout << str << endl;

	return 0;
}