// #include<bits/stdc++.h>

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }
  auto it = find(v.begin(), v.end(), x);
  cout << (it - v.begin()) + 1;
  return 0;
}