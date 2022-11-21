#include<iostream>
// #include<set>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
  vector<int> A = {0, 0, 0, 6, 0, 6, 4, 8, 8, 1};
  int len = A.size();
    auto it = A.end()-2;
    int carry = 0;
    A[len-1] += 1;
    if(A[len-1] == 10) {
        A[len-1] = 0;
        carry = 1;
    }
    while(it != A.begin() - 1) {
        if(A[it - A.begin()] == 9) {
            if(carry == 1) A[it - A.begin()] = 0;
        } else {
            A[it - A.begin()] += carry;
            carry = 0;
        }
        --it;
    }
    if(carry == 1) A.insert(A.begin(), carry);
    auto iter = A.begin();
    // if(*iter != 0) ;
    // else {
    while(iter != A.end()) {
        if(*iter != 0) {
          cout << *iter << " ";
          break;
        } else {
          cout << *iter << " ";
          A.erase(iter);
        }
    }
    cout << endl;
    // }
    auto iter1 = A.begin();
    while(iter1 != A.end()) {
      cout << *iter1 << " " ;
      ++iter1;
    }
    cout << endl;
  return 0;
}