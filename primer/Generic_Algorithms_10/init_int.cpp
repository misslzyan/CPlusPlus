#include <iostream>
int main() {
  int b = 33;
  int a{b};
  int c(a);
  std::cout << a << " " << c <<  "\n";
}
