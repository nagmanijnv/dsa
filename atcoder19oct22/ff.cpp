#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  map<pair<int, int>, int> sp; sp.insert({});
  vector<vector<int>> vec;
  for(int i = 0; i < k; i++) {
    int t, a, b;
    cin >> t >> a >> b;
    vec.push_back({t, a, b});
  }

  vector<vector<int>> :: iterator it = vec.begin();
  while(it != vec.end()) {
    vector<int> :: iterator itr = it->begin();
    if(*itr != 3) {
      auto map_itr = sp.find({*(itr+1), *(itr+2)});
      if(*itr == 1) {
        if(map_itr == sp.end()) {
          sp.insert({{*(itr+1), *(itr+2)}, 1});
        } else {
          map_itr->second = 1;
        }
      }
      if(*itr == 2) {
        if(map_itr == sp.end()) {
          sp.insert({{*(itr+1), *(itr+2)}, 0});
        } else {
          map_itr->second = 0;
        }
      }
    }
    if(*itr == 3) {
      auto val1 = sp.find({*(itr+1), *(itr+2)});
      auto val2 = sp.find({*(itr+2), *(itr+1)});
      if(val1 != sp.end() && val2 != sp.end() && val1->second == val2->second){
        if(val1->second == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
      } 
      else cout << "No" << endl;
    }
    ++it;
  }

  // auto its = sp.begin();
  // while(its != sp.end()) {
  //   cout << "key : " << (its->first).first << ", " << (its->first).second << " val : " << its->second << endl;
  //   ++its;
  // }

  return 0;
}