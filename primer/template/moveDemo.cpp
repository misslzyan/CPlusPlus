#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string a = "some string";
  std::string b = "something";
  std::vector<std::string> v;
  v.push_back(a);
  v.push_back(std::move(b));
  for (auto val : v) {
    std::cout << val << " ";
  }
  std::cout << "\n";
  return 0;
}
