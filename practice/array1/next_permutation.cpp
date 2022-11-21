// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int print(vector<int> &arr) {
  int i = 0;
  while(i < arr.size()) {
    cout << arr[i++]; // << " ";
  }
  cout << endl;
  return 0;
}

int allPermutation(int x, int y, vector<int> arr) {
  // if(y == arr.size()) {
  //   print(arr);
  // }
  for(int i = y; i < arr.size(); i++) {
    swap(arr[i], arr[y]);
    allPermutation(x, y+1, arr);
    swap(arr[i], arr[y]);
  }


  // if(y < arr.size()) {
  //   swap(arr[x], arr[y]);
  //   int temp = x+1;
    
  //   if(x < arr.size()) {
  //     allPermutation(temp, temp, arr);
  //   }

  //   if(x == arr.size() - 1) {
  //     print(arr);
  //   }

  //   allPermutation(x, y+1, arr);
  // }
  return 0;
}

int main () {
  clock_t tStart = clock();
  int x = 0, y = 0;
  vector<int> arr = {0,1,2,3,4,5,6,7,8,9};
  allPermutation(x, y, arr);
  printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}