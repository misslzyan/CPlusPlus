#include <vector>
#include <iostream>
#include <string>
#include <iterator>
#include <list>
int main() {
  std::list<int> v2;
  std::vector<int> v1 = {1,2,3,4}, v3;
  copy(v1.cbegin(), v1.cend(), front_inserter(v2));
  
  copy(v1.cbegin(), v1.cend(), inserter(v3, v3.begin()));
  for_each(v2.cbegin(), v2.cend(), [](const int  &s){std::cout << s << " ";});

  std::cout << "\n";
  for(auto c: v3){
    std::cout << c << " ";
  }

  std::cout << "\n";
}
