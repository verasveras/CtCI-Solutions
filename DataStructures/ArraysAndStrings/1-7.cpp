#include <iostream>
#include <iomanip>
#include <vector>
// CtCI Solution 1.7 - Write an algorithm such that if an element in a M x N matrix is zero, it's entire row and column are set to zero.
// Solution in C++

using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::vector;

class Matrix {
public:
	int** Mat;

	int width;
	int height;

	Matrix(int x, int y) {

		width = x;
		height = y;

		Mat = (int **)malloc(sizeof(int*)*y);
		int fill = 1; // the numbers used to fill the matrix will go from 1 to x*y.

		for (int i = 0; i < height; i++) {

			Mat[i] = (int *)malloc(sizeof(int)*x);
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
	} // end print


	// this function will make five random entries in the matrix zero.
	void makeZeros() {
		int x;
		int y;

		for (int i = 0; i < 5; ++i) {
			x = rand() % width;
			y = rand() % height;
			Mat[x][y] = 0;
		}

	} // end makeZeros


	// find all the zeros in a matrix and return the coordinate locations of those zeros.
	vector<vector<int>> findZeros() {
		vector <vector<int>> coords;
		vector <int> xs;
		vector <int> ys;

		for (int x = 0; x < width; ++x) {
			for (int y = 0; y < height; ++y) {
				if (Mat[x][y] == 0) {
					xs.push_back(x);
					ys.push_back(y);
				}
			}
		}

		coords.push_back(ys);
		coords.push_back(xs);

		return coords;

	} // end findZeros


	void changeZeros(vector<vector <int>> zeros) {

		vector<int> xs = zeros[0];
		vector<int> ys = zeros[1];
		int x;
		int y;

		for (int i = 0; i < 5; ++i) {
			x = xs[i];
			y = ys[i];
			
			// cout << x << "," << y << endl;

			for (int j = 0; j < height; ++j) { // change vertical lines
				Mat[j][x] = 0;
			}

			for (int j = 0; j < width; ++j) { // change horizontal lines
				Mat[y][j] = 0;
			}
		}

	}
};




int main() {

	Matrix mat(9, 10);

	cout << "Original Matrix:" << endl;
	mat.print(); // print original matrix
	mat.makeZeros(); // make 5 random entries in the matrix zero.
	cout << endl << endl;

	cout << "Matrix with Zeros:" << endl;
	mat.print(); // print matrix with zeros.
	vector<vector<int>> zeros = mat.findZeros();
	cout << endl << endl;

	cout << "Matrix with Row/Column Zeros:" << endl;
	mat.changeZeros(zeros);
	mat.print();
	cout << endl << endl;

	return 0;
}