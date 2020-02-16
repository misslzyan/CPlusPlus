#include <iostream>
#include <string>
#include <forward_list>

std::forward_list<std::string>  &insert(std::forward_list<std::string> &lst,const  std::string   &s1,const  std::string   &s2) {
  if(lst.empty()){
    lst.push_front(s2);
    return lst;
  }

  auto prev = lst.before_begin();
  auto curr = lst.begin();
  while(curr != lst.end()){
    if(*curr == s1){
      lst.erase_after(prev);
      lst.insert_after(prev, s2);
      return lst;
    }else{
      prev = curr;
      curr++;
    }
  }
  if(curr == lst.end()){
    lst.insert_after(prev, s2);
  }
  return lst;
}

int main(){
  std::forward_list<std::string> lst = {"hello", "world", "!!"};
  insert(lst, "!!", "..");
  for(auto w : lst) {
    std::cout << w << " ";
  }
  std::cout << "\n";
}
