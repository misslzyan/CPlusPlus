#include <iostream>
#include <vector>
using namespace std;
int main () {
  vector<int> nums;
  unsigned count;
  unsigned num;
  while (count != 10 && cin >> num) {
    count++;
    nums.push_back(num);
  }
  // add sum adjacent .
  vector<int> adjsum;
  for(decltype(nums.size()) i = 0; i < nums.size(); i++) {
    if (i % 2 == 1) {
      adjsum.push_back(nums[i] + nums[i-1]);
    }
  }
  for (auto i : adjsum) {
    cout << i << " ";
  }
  cout << endl;
  vector<int> sum;
  for (decltype(nums.size()) i = 0; i < (nums.size()/2); i++) {
    sum.push_back(nums[i] + nums[nums.size() - i - 1]);
  }
  for (auto i : sum) {
    cout << i << " ";
  }
  cout << endl;
}
