// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include<iostream>

using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	int matrix[row][col];
	// taking input
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			cin >> matrix[i][j];
		}
	}

	// set row and col value -1 for every 0
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if(matrix[i][j] == 0) {
				matrix[i][j] = -1;

				for(int icol = 0; icol < col; icol++) {
					if(matrix[i][icol] != 0) matrix[i][icol] = -1;
				}
				for(int irow = 0; irow < row; irow++) {
					if(matrix[irow][j] != 0) matrix[irow][j] = -1;
				}
			} 
		}
	}

	// updating -1 to 0 and printing matrix result
	for(int i = 0; i < row; i++) {
		for(int j = 0; j < col; j++) {
			if(matrix[i][j] == -1) matrix[i][j] = 0;
			cout << matrix[i][j] << endl;
		}
	}

  return 0;
}

// input : 
// 4 5 6 0 6 2 5 6 7
// matrix form
// 4 5 6
// 0 6 2
// 5 6 7
// output
// 0 5 6
// 0 0 0
// 0 6 7
// 0 5 6 0 0 0 0 6 7