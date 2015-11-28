#include <stdio.h>
#include <malloc.h>
// CtCI Problem 1.2 - Implement void reverse (char *str) to reverse a null terminated string.
// Solution in C

// Function to reverse a given char array.
void reverse(char *str) {

	char* cpy = str;
	int len = 0;

	// Find the length of the char array pointed to by str.
	while (*(cpy++)) {
		++len;
	}

	len--;

	/* Preform the reversal by swamping characters.
	If string length n, swamp 1st and nth character, then 2nd and n-1th character, etc. */
	int i;

	for (i = 0; i < len - 1; i++, len--) {
		char temp = str[len];
		str[len] = str[i];
		str[i] = temp;
	}

}

int main() {

	printf("Enter a string you would like to see reversed! \n");
	printf("Please limit your string to 10 characters.\n"); // Arbitrary size limit. 

	char str[11];
	fgets(str, sizeof(str), stdin);

	printf("String: \n%s\n", str);
	reverse(str);
	printf("String reversed: %s\n", str);

	return 0;
}