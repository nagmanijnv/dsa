#include "bits/stdc++.h"

#include<iostream>
// #include<vector>
// #include<tuple>
using namespace std;

int  main() {
  int row, col;
  // vector<pair<int, int> > vec;
  vector<int> row_vector;
  vector<int> col_vector;
  cout << "Enter space separated : row, col and row * col numbers....." << endl;
  cin >> row >> col;
  int matrix[row][col];
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      int item;
      cin >> item;
      // if(item == 0) vec.push_back(make_pair(i,j));
      if(item == 0) {
        row_vector.push_back(i);
        col_vector.push_back(j);
      }
      matrix[i][j] = item;
    }
  }
  cout << "processing started ......" << endl;
  sort(row_vector.begin(), row_vector.end());
  row_vector.erase(unique(row_vector.begin(), row_vector.end()), row_vector.end());
  sort(col_vector.begin(), col_vector.end());
  col_vector.erase(unique(col_vector.begin(), col_vector.end()), col_vector.end());
  vector<int>::iterator row_i = row_vector.begin();
  vector<int>::iterator col_i = col_vector.begin();
  
  while (row_i != row_vector.end()) {
    for(int i = 0; i < col; i++) {
      matrix[*row_i][i] = 0;
    }
    row_i++;
  }
  while (col_i != col_vector.end()) {
    for(int i = 0; i < row; i++) {
      matrix[i][*col_i] = 0;
    }
    col_i++;
  }
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << "index " << i << " " << j << " : " << matrix[i][j] << endl;
    }
  }
  return 0;
}

// using namespace std;

// void setZeroes(vector<vector<int> > & matrix) {
//   int rows = matrix.size(), cols = matrix[0].size();
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       if (matrix[i][j] == 0) {

//         int ind = i - 1;
//         while (ind >= 0) {
//           if (matrix[ind][j] != 0) {
//             matrix[ind][j] = -1;
//           }
//           ind--;
//         }
//         ind = i + 1;
//         while (ind < rows) {
//           if (matrix[ind][j] != 0) {
//             matrix[ind][j] = -1;
//           }
//           ind++;
//         }
//         ind = j - 1;
//         while (ind >= 0) {
//           if (matrix[i][ind] != 0) {
//             matrix[i][ind] = -1;

//           }
//           ind--;
//         }
//         ind = j + 1;
//         while (ind < cols) {
//           if (matrix[i][ind] != 0) {
//             matrix[i][ind] = -1;

//           }
//           ind++;
//         }
//       }
//     }
//   }
//   for (int i = 0; i < rows; i++) {
//     for (int j = 0; j < cols; j++) {
//       if (matrix[i][j] <= 0) {
//         matrix[i][j] = 0;
//       }
//     }
//   }

// }

// int main() {
//   vector < vector < int > > arr;
//   arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
//   setZeroes(arr);
//   cout << "The Final Matrix is " << endl;
//   for (int i = 0; i < arr.size(); i++) {
//     for (int j = 0; j < arr[0].size(); j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << "\n";
//   }
// }