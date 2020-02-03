#include <random>
#include <iostream>
template <typename T>
void printRandom(T &r) {
  for (unsigned i = 0; i != 5; i++) {
    std::cout << r() << " ";
  }
  std::cout << "\n";
  std::cout << "Max is :" << r.max() << std::endl;
  std::cout << "Min is :" << r.min() << std::endl;
}

void print(int min, int max, int (*fun)(int, int)) {
  for (unsigned i = 0; i != 5; i++) {
    std::cout << fun(min, max) << " ";
  }
  std::cout << std::endl;
}

template <typename T, typename M>
void printR(T &r, M &m) {
  for (unsigned i = 0; i != 5; i++) {
    std::cout << r(m) << " ";
  }
  std::cout << "\n";
}

/*
  generate a random int between min and max.
*/
int generateInt(int min, int max) {
  // use for generating random seed.
  std::random_device rd;
  std::mt19937 mt(rd());//generate a random with a seed.
  std::uniform_int_distribution<int> distribution(min, max);
  return distribution(mt);
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
  
  // random 0 ~ 9
  std::uniform_int_distribution<int> u(0, 9);
  printR(u, r);
  printR(u, rd);
  print(0, 9,generateInt);
  return 0;
}
