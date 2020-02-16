#include <iostream>
#include <vector>
int main(){
  std::vector<int> vec;
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  for(std::vector<int>::size_type ix = 0 ; ix != 24; ix ++) {
    vec.push_back(ix);
  }
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  vec.clear();
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  std::vector<int> t;
  vec=t;
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  vec.reserve(50);
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  for(std::vector<int>::size_type ix = 0 ; ix != 33; ix ++) {
    vec.push_back(ix);
  }
  std::cout << "vec:size:" << vec.size() << "\n" << "vec:capacity:" << vec.capacity() << "\n";
  
}
