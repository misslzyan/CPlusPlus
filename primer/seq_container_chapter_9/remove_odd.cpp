#include <list>
#include <iostream>
int main () {
  std::list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto begin = li.begin();
  auto end = li.end();
  while (begin != end) {
    if(*begin % 2) {
      begin = li.erase(begin);
    }else {
      begin++;
    }
  }
  for (auto i : li) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
