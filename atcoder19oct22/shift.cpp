#include<iostream>
// #include<algorithm>
// #include <type_traits>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  if (n >= k) {
  // shift_left(arr[0], arr[n-1], k);
    for(int i = k; i < n; i++) {
      cout << arr[i] << " ";
    }
    for(int i = n-k; i < n; i++) {
      cout << 0 << " ";
    }
  } else {
    for(int i = 0; i < n; i++) {
      cout << 0 << " ";
    }
  }
  cout << endl;
  return 0;
}