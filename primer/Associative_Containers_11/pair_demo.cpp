#include <iostream>
#include <utility>
#include <string>
#include <vector>

std::pair<int, int> g(std::vector<int> &v) {
  if(v.empty()) {
    return std::pair<int, int>();
  }else{
    return {v.back(), v.size()};
  }
}

int main () {
  std::vector<int> vecs = {1, 2, 3, 4, 5};
  auto p = g(vecs);
  std::cout << p.first << ":" << p.second << "\n";
}
