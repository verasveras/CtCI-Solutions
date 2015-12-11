#include <iostream>
#include <iomanip>
// CtCI Solution 1.6 - Implement a function to preform a 90 degree rotation of an NxN matrix.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;
using std::setw;

class Matrix {
public:
	int** Mat;

	int width;
	int height;

	Matrix(int x, int y) {

		width = x;
		height = y;

		Mat = (int **) malloc(sizeof(int*)*y);
		int fill = 1; // the numbers used to fill the matrix will go from 1 to x*y.

		for (int i = 0; i < height; i++) {
			
			Mat[i] = (int *) malloc(sizeof(int)*x);
			for (int j = 0; j < width; j++) {
				Mat[i][j] = fill++;
			}
		}
	} // constructor end 

	void print() {

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << setw(2) << Mat[i][j] << " ";
			}
			cout << endl;
		}
	}


	void rotateMat() {

		int top = 0;
		int bot = 0;
		int left = 0;
		int right = 0;
		int offset = 0;
		int tmp;

		if (height != width) {
			cout << "Cannot rotate a non square matrix!" << endl;
			return;
		}

		else {
			for (int i = 0; i < width / 2; i++) {
				left = i;
				top = i;
				right = width - i - 1;
				bot = height - i - 1;

				while (left + offset < right) {
					tmp = Mat[left][bot - offset];
					Mat[left][bot - offset] = Mat[left + offset][top];
					Mat[left + offset][top] = Mat[right][top + offset];
					Mat[right][top + offset] = Mat[right - offset][bot];
					Mat[right - offset][bot] = tmp;

					++offset;
				}

				offset = 0;
			}
		}
	}
};


int main() {

	Matrix mat(5, 5);
	cout << "Original Matrix:" << endl;
	mat.print();
	cout << "\n\n" << "Rotated Matrix:" << endl;
	mat.rotateMat();
	mat.print();

	return 0;
}