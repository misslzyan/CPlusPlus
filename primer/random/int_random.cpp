#include <random>
#include <iostream>
template <typename T>
void printRandom(T &r) {
  for (unsigned i = 0; i != 5; i++) {
    std::cout << r() << " ";
  }
  std::cout << "\n";
}

int main () {
  std::random_device rd;
  for (int i = 0; i != 5; i++) {
    std::cout << rd() << " ";
  }
  std::cout << "\n";
  // generate the same random int .
  std::default_random_engine r;
  for ( int i = 0; i != 5; i++) {
    std::cout << r() << " ";
  }
  std::cout << "\n";
  // generate the different random int.
  std::default_random_engine r2(10);
  printRandom(r2);
  return 0;
}
