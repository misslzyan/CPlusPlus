#include <iostream>
#include <vector>
#include <string>
int main () {
  
  std::vector<std::string> vec = {"11", "bbb", "dddd"};
  int sz = 3;
  auto first = find_if(vec.begin(), vec.end(), [sz](const std::string &s) {return s.size() >= sz;});
  std::cout << "first is :" << *first << "\n";
  int v1 = 42;
  auto f = [&] {return ++v1;};
  v1 = 0 ;
  std::cout << f() << " ";
  std::cout << "\n"; 
  std::vector<int> ii = {-1, 2, -3};
  transform(ii.begin(), ii.end(), ii.begin(), [](int i) -> int {
     if(i<0){
       return -i;
     }else {
       return i;
     }
   });
  for_each(ii.begin(), ii.end(),[](int i) {std::cout<<i << " ";});
  std::cout << "\n";
}  
