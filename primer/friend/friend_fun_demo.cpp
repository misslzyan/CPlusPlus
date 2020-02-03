#include <iostream>
#include <string>

class A {
private:
  int x;
  std::string y;
public:
  A() = default;
  A(int x, std::string y): x(x), y(y) {}
  friend void disp(A &);
};

void disp(A &a) {
  std::cout << a.x << " ";
  std::cout << a.y << " ";
  std::cout << "\n";
}

int main () {
  A a(1, "something");
  disp(a);
  return 0;
}
