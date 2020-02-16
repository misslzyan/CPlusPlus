#include <iostream>
#include <vector>

int main () {
  std::vector<int> vec = {0, 1, 2, 3,4 ,5};
  fill(vec.begin(), vec.end(), 2);
  for(auto c : vec) 
  {
    std::cout << c << "\n";
  }  
  size_t n = vec.size();
  fill_n(vec.begin(), n, 6);
  for(auto c : vec) {
    std::cout << c << " ";
  }
  std::cout << std::endl;
  auto val = back_inserter(vec);
  *val = 10;
  for(auto c : vec) {
    std::cout << c << " ";
  }
  std::cout << "\n";
}
