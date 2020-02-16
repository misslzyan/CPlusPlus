#include <iostream>
#include <vector>

int main() {
  std::vector<int> lst = {1, 2, 3};
  auto begin  = lst.begin();
  while(begin != lst.end()){
    if(*begin % 2) {
      begin = lst.insert(begin, *begin);
      begin = begin +2;
    }else{
      begin = lst.erase(begin);
    }
  }
  for (auto i : lst) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
