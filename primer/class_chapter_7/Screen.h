#ifndef SCREEN_H
#define SCREEN_H

#include <string>
#include <iostream>

class Screen { 
public:
  friend class Window_mgr;

  typedef std::string::size_type pos;

  Screen():contents(100, ' '){} // needed because Screen has another constructor.

  Screen(pos ht, pos wd): height(ht), width(wd), contents(100, ' ') {}  

  Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c){}

  inline char get() const   { return this -> contents[cursor];}

  char get(pos ht, pos wd) const; 

  Screen &move(pos r, pos c);// can be made inline later.

  void some_member() const;

  Screen &set(char);

  Screen &set(pos, pos, char);
  
  friend void print(Screen &);
  
  Screen &display(std::ostream &os) {
    do_display(os); return *this;
  }
 
  const Screen &display(std::ostream &os) const {
    do_display(os); return *this;
  }
private:
  
  //function to do the work of displaying a Screen.
  void do_display(std::ostream &os) const {
    os << this -> contents;
    os << "\n";
  }  

  //mutable
  mutable size_t access_ctr; // may change even in a const object.

  pos cursor = 0;

  pos height = 10, width = 10;

  std::string contents;
};


void Screen::some_member() const {
  ++(this -> access_ctr);
}


inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}

inline Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen &Screen::set(pos r, pos col, char c) {
  contents[(r * width) + col] = c;
  return *this;
}

void print(Screen &s) {
  std::cout << "contents:" << s.contents << std::endl;
}

/*
inline Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}
*/
#endif
