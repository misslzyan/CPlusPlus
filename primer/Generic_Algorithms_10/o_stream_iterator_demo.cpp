#include <iostream>
#include <vector>
#include <iterator>
int main () {
  std::vector<int> vec = {1, 2, 3};
  std::ostream_iterator<int> o(std::cout, " ");
  for(auto c : vec) {
    o = c;
  }
  std::cout << "\n";
  copy(vec.begin(), vec.end(), o);
  std::cout << "\n";  
}
