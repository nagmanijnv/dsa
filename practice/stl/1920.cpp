#include<iostream>
// #include<set>
#include<vector>
// #include<algorithm>

using namespace std;

vector<int> buildArray(vector<int>& nums) {
  int n=nums.size();
  for(int i=0;i<n;i++){
      cout << "module " << endl;
      cout << nums[nums[i]]%n << endl;
      nums[i]=nums[i]+(n*(nums[nums[i]]%n)); // 
      cout << "updated value " << endl;
      cout << nums[i] << endl;
  }
  for(int i=0;i<n;i++){
      nums[i]/=n;
  }
  return nums;
}

int main() {
  vector<int> nums = {1, 2, 0, 4, 5, 3};
  buildArray(nums);
  for(int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
  return 0;
}

// 0 : nums[0] + 6*nums[nums[0]] -> 1 + 6*nums[1] -> 1 + 6*2 -> 13/6 -> 2
// 1 : nums[1] + 6*nums[nums[1]] -> 2 + 6*nums[2] -> 2 + 6*0 -> 2/6 -> 0
// 2 : nums[2] + 6*nums[nums[2]] -> 0 + 6*nums[0] -> 0 + 6*13 -> 78/6 -> 13
// 3 : nums[3] + 6*nums[nums[3]] -> 4 + 6*nums[4] -> 4 + 6*5 -> 34/6 -> 5
// 4 : nums[4] + 6*nums[nums[4]] -> 5 + 6*nums[5] -> 5 + 6*3 -> 23/6 -> 3
// 5 : nums[5] + 6*nums[nums[5]] -> 3 + 6*nums[3] -> 3 + 6*34 -> 207/6 -> 34