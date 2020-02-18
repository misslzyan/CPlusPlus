#include <iostream>
#include <string>
#include <vector>
int main () {
  std::vector<int> vec = {1, 2, 3};
  for_each(vec.crbegin(), vec.crend(), [](const int &i) {std::cout << i << " ";});
}
