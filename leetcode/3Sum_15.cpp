#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    if (nums.empty()) {
      return result;
    }
    std::size_t n_size = nums.size();
    std::sort(nums.begin(), nums.end());
    for ( int i = 0; i < n_size; i++) {
      if (nums[i] > 0) break;
      if (i > 1 && nums[i] == nums[i-1]) continue; // do not duplicate calculate.
      int left = i + 1;
      int right = n_size - 1;
      while(left < right) {
        int sum = nums[i] + nums[left] + nums[right];
        if (sum > 0 ) {
          right--;
        } else if (sum < 0) {
          left++;
        } else {
          result.push_back({nums[i], nums[left], nums[right]});
          int last_left = nums[left];
          int last_right = nums[right];
          while(left < right && last_left == nums[left]) left++;
          while(left < right && last_right == nums[right]) right--;
        }
      }
    }
    return result;
  }

  void print(std::vector<std::vector<int>> &vector) {
    std::cout << "result:\n";
    std::cout << "[\n";
    for (auto tmpV : vector) {
      std::cout << "  [";
      for (auto i : tmpV) {
        std::cout << i << " ";
      }
      std::cout << "]\n";
    }
    std::cout << "]\n";
  }
};

int main() {
  std::string fileName("3Sum.case");
  std::ifstream in(fileName);
  std::string line;
  while(std::getline(in, line)){
    std::vector<int> tmp;
    int i;
    std::istringstream istring(line);
    while(istring >> i) {
      tmp.push_back(i);
    }
    Solution solution;
    std::vector<std::vector<int>> res = solution.threeSum(tmp);
    solution.print(res);
  }
}
