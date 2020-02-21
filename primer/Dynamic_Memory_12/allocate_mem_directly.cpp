#include <iostream>
#include <string>

int main () {
  std::string *p = new std::string("abc");
  std::cout << *p << "\n";
  const std::string *p1 = new const std::string("bcd");
  std::cout << *p1 << "\n";
  auto *p2 = new auto(*p);
  std::cout << *p2 << "\n";
  int *p3 = new int;
  int *p4 = new (std::nothrow) int;
  delete p3;
  delete p4;
}
