#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>
#include <string>

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
  
  //compare only string.
  template <unsigned M, unsigned N>
  int compare_string(const char (&p1)[M], const char (&p2)[N]) {
    return strcmp(p1, p2);
  }
}

#endif
