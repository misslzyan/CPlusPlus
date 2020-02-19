#include <iostream>
#include <vector>
#include <set>
int main () {
  std::vector<int> ivec;
  for (size_t i = 0; i != 10; i++) {
    ivec.push_back(i);
    ivec.push_back(i);
  }
  std::set<int> iset(ivec.cbegin(), ivec.cend());
  std::multiset<int> multiset(ivec.cbegin(), ivec.cend());
  std::cout << ivec.size() << "\n";
  std::cout << iset.size() << "\n";
  std::cout << multiset.size() << "\n";
}
