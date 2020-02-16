#include <iostream>
#include <vector>
int main () {
  int a[] = {1, 2, 3 ,4 ,5};
  int b[sizeof(a)/sizeof(*a)];
  std::copy(std::begin(a), std::end(a), b);
  for(auto c : b) {
    std::cout << c << " ";
  }
  std::cout << "\n";
  std::replace(std::begin(a), std::end(a), 2, 88);
  for(auto c : a) {
    std::cout << c << " ";
  }
  std::cout << "\n";
  std::vector<int> vec;
  std::replace_copy(std::begin(a), std::end(a), std::back_inserter(vec), 3, 44);
  for(auto c : vec) {
    std::cout << c << " ";
  }
  std::cout << "\n";
  return 0;
}
