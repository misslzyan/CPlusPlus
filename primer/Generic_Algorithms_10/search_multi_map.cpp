#include <map>
#include <iostream>
#include <string>

int main () {
  std::multimap<std::string, int> map = {{"aa",1},{"aa",2}};
  std::string search_item{"aa"};
  for(auto beg = map.lower_bound(search_item), end = map.upper_bound(search_item); beg != end; ++beg){
    std::cout << beg->first << "->" << beg->second << "\n";
  }
}
