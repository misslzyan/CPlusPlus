#include <iostream>

  static int count = 0;
class numbered {
public:
  int mysn;
  numbered(): mysn(0) {}
  numbered(const numbered & n) {
    this -> mysn = ++count;
  }
  void operator= (const numbered &n) {
    this -> mysn = ++count;
  }
};

void f(numbered s) { std::cout << s.mysn << std::endl; }

void fc(const numbered &s) { std::cout << s.mysn << std::endl; }

int main () {
  numbered a, b , c ;
  b = a;
  c = b;
  f(a);
  f(b);
  f(c);
  fc(a);
  fc(b);
  fc(c);
}
