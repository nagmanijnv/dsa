#include<iostream>
#include<set>

using namespace std;

// erase can take value or iterator or range of iterators
// erase(first, second) -- exclusive of second iterator

int main() {
  int n;
  cin >> n;
  set<int> s;
  while(n--) {
    int item;
    cin >> item;
    s.insert(item);
  }
  s.erase(10); // delete element whose value is 10
  // s.clear(); // delete all element i.e clear the set
  set<int> :: iterator it = s.begin();

  while(it != s.end()) {
    cout << *it << " ";
    ++it;
  }
  cout << endl;

  return 0;
}