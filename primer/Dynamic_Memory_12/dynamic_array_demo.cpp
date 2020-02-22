#include <iostream>
#include <memory>
int main () {
  typedef int arrT[42];
  auto *p = new arrT;
  // use shared_ptr to manage dynamic array.
  std::shared_ptr<int> p1(new int[10], [](int *p) {delete [] p;});
  for ( int i = 0; i != 10; i++) {
    *(p1.get()+i) = i;
  }
  
  int *ip = p1.get();
  for (int i = 0; i != 10; i++) {
    std::cout << *(ip + i) << " ";
  }
  std::cout << "\n";
  int *pt = p1.get();
  for (int *i = pt; i != pt + 10; i++) {
    std::cout << *i << " ";
  }
  std::cout << "\n";

  // use unique_ptr to manage dynamic array.
  std::unique_ptr<int[]> up(new int[10]());
  
  for(int i = 0; i != 10; i++) {
    std::cout << up[i] << " ";
  }

  std::cout << "\n";
  
  for(int i = 0; i != 10; i++) {
    up[i] = i;
  }
  
  for(int i = 0; i != 10; i++) {
    std::cout << up[i] << " ";
  }
  std::cout << "\n";
}
