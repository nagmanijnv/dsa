#include<bits/stdc++.h>
// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<char> v1 = {'H', 'D', 'C', 'S'};
  vector<char> v2 = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

  set<pair<char, char> > sc;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(find(v1.begin(), v1.end(), s[0]) != v1.end()) {
      if(find(v2.begin(), v2.end(), s[1]) != v2.end()) {
        sc.insert({s[0], s[1]});
      }
    }
  }
  if(sc.size() == n) cout << "Yes";
  else cout <<  "No";
  return 0;
}