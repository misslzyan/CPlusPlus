#include <iostream>
int main() {
  int i = 100, sum = 0;
  for(int i = 0; i != 10; i++) {
    sum = sum + i;
  }
  std::cout << sum << " " << i << std::endl;
}
