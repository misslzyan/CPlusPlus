#include <vector>

int main () {
  std::vector<int> vec = {1,2,3};
  vec.clear();
  vec.push_back(4);
  vec.erase(vec.begin(), vec.end());
} 
