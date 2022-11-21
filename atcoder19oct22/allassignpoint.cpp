#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main() {
  int n;
  cin >> n;
  long int g_value = 0;
  vector<long int> vec;
  vector<long int> result;
  for(int i = 0; i < n; i++) {
    long int a;
    cin >> a;
    vec.push_back(a);
  }
  int query;
  cin >> query;
  set<int> s = {};
  while(query--) {
    int type;
    cin >> type;
    if(type == 1) {
      cin >> g_value;
      while(!s.empty()) {
        vec[s.]
      }
      s.clear();
      // fill(vec.begin(), vec.end(), val);
      // vec.assign(vec.size(), val);
      // for(int i = 0; i < vec.size(); i++) {
      //   vec[i] = val;
      // }
    } else if(type == 2) {
      int index;
      long int val;
      cin >> index >> val;
      vec[index-1] += val;
      s.insert(index-1);
    } else {
      int index;
      cin >> index;
      if(s.find(index-1) != s.end()) {
        result.push_back(g_value + vec[index-1]);
      } else {
        if(g_value) result.push_back(g_value);
        else result.push_back(vec[index-1]);
      }
    }
  }

  auto it = result.begin();
  while(it != result.end()) {
    cout << *it << endl;
    ++it;
  }

  return 0;
}