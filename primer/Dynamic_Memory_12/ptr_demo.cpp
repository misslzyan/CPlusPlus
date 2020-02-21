#include <iostream>
#include <string>
#include <memory>

int main () {
  // shared_ptr that points to an int with value 42.
  std::shared_ptr<int> p3 = std::make_shared<int>(42);
  // p4 pointts to a string with value 9999999999.
  std::shared_ptr<std::string> p4 = std::make_shared<std::string>(10, '9');
  // p5 points to an int zero value.
  std::shared_ptr<int> p5 = std::make_shared<int>();
}
