#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

namespace dwd {
  template <typename T>
  int compare(const T &v1, const T &v2) {
    if (v1 < v2 ) return -1;
    if (v1 > v2 ) return 1;
    return 0;
  }
  template <typename T>
  inline T min(const T &v1, const T &v2) {
    return v1 < v2 ? v1 : v2;
  }
  
  template <typename T> inline T max(const T &v1, const T &v2) {
    return v1 < v2 ? v2 : v1;
  }
  
  //swap two elements.
  template <typename T>
  void swap (T &v1, T &v2) {
    T _temp(std::move(v1));
    v1 = std::move(v2);
    v2 = std::move(_temp);
  }
  
  //print the list of T.
  template <typename T>
  static inline void printList(std::vector<T> list, unsigned cnt) {
    for (unsigned i = 0; i != cnt; i++) {
      std::cout << list[i] << " ";
    }
    std::cout << std:: endl;
  }
  
  //generate a random int between min and max.

  // convert an int to string.
  std::string intToString(int i){
    std::stringstream ss;
    ss << i;
    return ss.str();
  }
  
  //compare only string.
  template <unsigned M, unsigned N>
  int compare_string(const char (&p1)[M], const char (&p2)[N]) {
    return strcmp(p1, p2);
  }
}

#endif
