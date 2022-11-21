#include<iostream>
#include<algorithm>
// #include <type_traits>

using namespace std;

bool isConfusingTime(int a, int b, int c, int d) {
  swap(b, c);
  if(a*10+b < 24 && c*10+d < 60) {
    swap(b, c);
    cout << a*10+b << " " << c*10+d << endl;
    return true;
  }
  return false;
}

void findConfusingTime(int a, int b, int c, int d) {
  if(!isConfusingTime(a, b, c, d)) {
    if(c*10+d == 59) {
      if(a*10+b == 23) {
        a = 0; b = 0; c = 0; d = 0;
        cout << a*10+b << " " << c*10+d << endl;
        exit(0);
      } else {
        int temp = 10*a+b;
        temp += 1;
        a = temp/10;
        b = temp%10;
        c = 0;
        d = 0;
        findConfusingTime(a, b, c, d);
      }
    } else {
      int temp = 10*c+d;
      temp += 1;
      c = temp/10;
      d = temp%10;
      findConfusingTime(a, b, c, d);
    }
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  int a, b, c, d;
  a = n/10;
  b = n%10;
  c = k/10;
  d = k%10;
  findConfusingTime(a, b, c, d);
  return 0;
}