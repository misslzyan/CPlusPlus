#include <iostream>
#include <vector>
#include <iterator>
int main () {
  std::istream_iterator<int> in(std::cin);
  std::istream_iterator<int> eof;
  std::vector<int> vec; 
  while (in != eof) {
    vec.push_back(*in++);
  }
  std::for_each(vec.begin(), vec.end(), [](const int &i) {std::cout << i << " ";});
  std::cout << "\n";
  
  return 0;
}
