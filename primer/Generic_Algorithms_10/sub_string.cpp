#include <string>
#include <iostream>
int main() {
  std::string line = "hello,world,last";
  auto comma = find(line.cbegin(), line.cend(), ',');
  std::cout << std::string(line.cbegin(), comma) << "\n";
  auto commaLast = find(line.crbegin(), line.crend(), ',');
  std::cout << std::string(line.crbegin(), commaLast) << "\n";
  std::cout << std::string(commaLast.base(), line.cend()) << "\n";
}
