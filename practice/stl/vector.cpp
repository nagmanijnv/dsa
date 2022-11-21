// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include<iostream>
#include<vector>

using namespace std;

int main() {
  int row, col;
  vector<vector<int> > matrix;

  cout << " enter row and col " << endl;
  cin >> row >> col;

  for(int i = 0; i < row; i++) {
    vector<int> temp; // or  matrix.push_back(vector<int> ()); Now we can use matrix[i]
    for(int j = 0; j < col; j++) {
      int item;
      cin >> item;
      temp.push_back(item); // matrix[i].push_back(item)
    }
    matrix.push_back(temp);
  }

  vector<vector<int> >:: iterator iter2d = matrix.begin();
  // int inner = 0;
  while(iter2d != matrix.end()) {
    vector<int> :: iterator it = (*iter2d).begin();
    while(it != iter2d->end()) {
      cout << *it << " ";
      ++it;
    }
    cout << endl;
    ++iter2d;
  }

  // for(int i = 0; i < row; i++) {
  //   for(int j = 0; j < row; j++) {

  //     matrix[i].push_back(10);
  //   }
  // }
  
}