#include <sstream>
#include <iterator>
#include <string>
#include <iostream>
#include <numeric>
int main() {
  std::string s = "2 3 4 5 6 7";
  std::istringstream str_in(s);
  std::istream_iterator<int> it(str_in), eof;
  std::cout << accumulate(it, eof, 0) << std::endl;
}
