#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <sstream>
#include <iterator>
int main () {
  std::string line1 = "hello world enheng";
  std::string line2 = "1 2 3";
  std::istringstream iw{line1};
  std::istringstream ii{line2};
  std::istream_iterator<std::string> sit{iw}, send;
  std::istream_iterator<int> iit{ii}, iend;
  std::vector<std::pair<std::string, int>> vec;
  while (sit != send && iit != iend) {
    vec.push_back({*sit, *iit});
    sit++;
    iit++; 
  }

  for (auto &p : vec ) {
    std::cout << p.first << "->" << p.second << "\n";
  }
}
