#include <iostream>
#include <list>
#include <string>

int main() {
  std::list<std::string> l = {"hello", "world", "!!"};
  if (!l.empty()) {
    // get first
    auto f1 = *l.begin();
    auto f2 = l.front();
    std::cout << f1 << " " << f2 << "\n";
    // get last
    auto e1 = *(--l.end());
    auto e2 = l.back();
    std::cout << e1 << " " << e2 << "\n";
    l.front() = "oo"; // change because front() return reference.
    auto &e3 = l.back();
    e3 = ".."; // changed.
    auto e4 = l.back();
    e4 = "::"; // not change.
  }
  
  for (auto w : l) {
   std::cout << w << " ";
  }
   std::cout << "\n";
}
