#include <iostream>
int re_use = 42;
int main() {
  int i = 0;
  std::cout << re_use << " " << i << std::endl;
  int re_use = 0;
  std::cout << re_use << " " << i << std::endl;
  std::cout << ::re_use << " " << i << std::endl;
  return 0;
}
