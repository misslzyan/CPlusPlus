#include <iostream>
#include <string>
#include <map>
int main () {
  std::map<std::string, size_t> map;
  std::string word;
  while(std::cin>>word) {
    map[word]++;
  }
  for(auto &w : map) {
    std::cout << w.first << " occurs " << w.second << "times!\n";
  }
}
