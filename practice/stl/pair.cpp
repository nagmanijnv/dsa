// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

#include<iostream>
#include<vector>
// #include<tuple>

using namespace std;

int main() {
  int n;
  vector<pair<int, int>> vec_pair;

  cout << " enter row and vector " << endl;
  cin >> n;

  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y ;
    // vec_pair.push_back(make_pair(x, y));
    vec_pair.push_back({x, y});
  }

  vector<pair<int, int>> :: iterator pr = vec_pair.begin();

  // while(pr != vec_pair.end()) {
  //   cout << pr->first << " " << pr->second << endl;
  //   ++pr;
  // }
  for(int i = 0; i < n; i++) {
    cout << pr->first << " " << pr->second << endl;
    ++pr;
  }
  return 0;
  
}