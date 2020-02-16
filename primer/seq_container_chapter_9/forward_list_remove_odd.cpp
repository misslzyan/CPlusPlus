#include <forward_list>
#include <iostream>

int main () {
  std::forward_list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto prev = lst.before_begin();
  auto curr = lst.begin();
  while (curr != lst.end()) {
    if(*curr % 2){
      curr = lst.erase_after(prev);
    }else{
      prev = curr;
      curr++;
    }
  }
  for (auto i : lst) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
