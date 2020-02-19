#include <iostream>
#include <set>
#include <string>
#include <map>
#include <vector>
#include <list>
int main () {
  std::map<std::string, size_t> map;
  std::set<std::string> set = {"the", "and"};
  std::string word;
  while(std::cin >> word) {
    if(set.find(word) == set.end()){
      map[word]++;
    }
  }

  for (auto &w : map) {
    std::cout << w.first << " occurs " << w.second << " times!\n";
  }
  std::map<std::vector<int>::iterator, int> m1;
  std::map<std::list<int>::iterator, int> m2;
}
