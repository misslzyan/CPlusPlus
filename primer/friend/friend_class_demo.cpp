#include <iostream>
#include <string>
// define Inner class
class Inner {
private:
  int a;
  std::string b;
  friend class Outer;
public:
  Inner():a{1}, b{"somestring"}{}
};

// define Outer class
class Outer {
public:
  void dist(Inner &val) {
    std::cout << val.a << " ";
    std::cout << val.b << " ";
    std::cout << std::endl;
  }
};

// main function.
int main () {
  Inner a;
  Outer b;
  b.dist(a);
  return 0;
}
