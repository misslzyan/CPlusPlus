#include <fstream>
#include <sstream>
#include <iostream>
#include <map>
#include <string>

std::map<std::string, std::string> build_map(std::ifstream &in) {
  std::map<std::string, std::string> map;
  std::string line;
  std::string word;
  std::istringstream in_str;
  while(getline(in, line)){
  //  std::cout << "line:" << line << "\n";
    in_str.str(line);
    in_str.clear();
    bool first = true;
    std::ostringstream out_str;
    std::string k;
    bool vfirst = true;
    while(in_str >> word) {
//      std::cout << "word:" << word << "\n";
      if(first){
        first = false;
        k = word;
      }else {
        if(vfirst){
          out_str << word;
          vfirst = false;
        }else{
          out_str << " " << word;
        }
      }
    }
    //std::cout << "K:" << k << "\n";
   // std::cout << "v:" << out_str.str() << "\n";
    map[k] = out_str.str();
  }
  return map;
}

void print(std::map<std::string, std::string> map) {
   for(auto &w : map) {
     std::cout << w.first << " -> " << w.second << "\n";
   }
}

std::string transfor_line(std::map<std::string, std::string> &map, std::string &line) {
  std::string res;
  std::istringstream input(line);
  std::string word;
  auto end = map.end();
  bool first = true;
  while(input >> word) {
    auto begin = map.find(word);
    if (begin == end) {
      if(first){
        res.append(word);
        first = false;
      }else{
        res.append(" ");
        res.append(word);
      }
    }else{
      if(first){
        res.append(begin->second);
        first = false;
      }else{
        res.append(" ");
        res.append(begin->second);
      }
    }
  }
  return res;
}


void transform(std::ifstream &map_in, std::ifstream &i_in){
  auto map = build_map(map_in);
//  print(map);
  std::string line;
//  getline(i_in, line);
  while(getline(i_in, line)) {
    std::cout << transfor_line(map, line) << "\n";
  }
//  auto r = transfor_line(map, line);
//  std::cout << r << "\n";
}


int main () {
  std::string map_file = "map_file.data";
  std::string in_file = "in_file.data";
  std::ifstream map_in(map_file);
  std::ifstream i_in(in_file);
  transform(map_in, i_in);
  return 0;
}
