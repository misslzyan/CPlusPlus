#include <iostream>
#include <string>

int main () {
  std::string name("AnnaBelle");
  auto pos1 = name.find("Anna");
  std::cout << "pos1:" << pos1 << "\n";
  std::string lowercase("annabelle");
  auto pos2 = lowercase.find("Anna");
  std::cout << "pos2:" << pos2 << "\n";
  std::string numbers("0123456789"), name1("job2");
  auto pos3 = name1.find_first_of(numbers);
  auto pos4 = name1.find_first_not_of(numbers);
  std::cout << "pos3:" << pos3 << "\n";
  std::cout << "pos4:" << pos4 << "\n";
  std::cout << "std::string::npos:" << std::string::npos << "\n";
}
