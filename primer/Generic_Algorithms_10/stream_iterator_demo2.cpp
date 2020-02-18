#include <iostream>
#include <iterator>
#include <vector>
int main() {
  std::istream_iterator<int> in_int(std::cin), e;
  std::vector<int> vec(in_int, e);
  for_each(vec.cbegin(), vec.cend(), [](const int &i){std::cout << i << " ";});
  return 0;
}
