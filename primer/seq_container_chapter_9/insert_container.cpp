#include <iostream>
#include <list>
#include <vector>
#include <string>

void print(std::list<int> &l) {
  for (auto t : l) {
    std::cout << t << " "; 
  }
  std::cout << "\n";
}


int main (int argc, char* argv[]){
  std::vector<int> v;
  std::list<int> l;
  for (unsigned i = 0; i != 10; i++) {
    v.insert(v.begin(), i);
    l.insert(l.begin(), i);
  }
  for (auto t : v) {
    std::cout << t << "\n";
  }

  std::cout << "list:" << "\n";
  for (auto t : l) {
    std::cout << t << "\n";
  }

  l.insert(l.end(), 10, 4);
  print(l);
}
