#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <iostream>
#include <vector>
#include "Screen.h"

class Window_mgr {
private:

  std::vector<Screen> screens{Screen(24, 80, ' ')};
public:  
  typedef std::vector<Screen>::size_type ScreenIndex;
  void clear(ScreenIndex i);
  ScreenIndex addScreen(const Screen &);
};

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &scr) {
  screens.push_back(scr);
  return screens.size() -1;
}

void Window_mgr::clear(ScreenIndex i){
  Screen &s = screens[i];
  s.contents = std::string(s.height * s.width, ' ');
}
#endif
