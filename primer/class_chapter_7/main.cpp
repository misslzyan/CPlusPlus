#include <iostream>
#include <string>
#include "Window_mgr.h"
#include "Screen.h"
using namespace std;

int main () {
  Screen myscreen;
  char ch = myscreen.get();
  cout << "ch:" << ch << endl;
  ch = myscreen.get(0, 0);
  cout << "ch:" << ch << endl;
  print(myscreen);
  Screen s1(10, 10, '#');
  print(s1);
  s1.set('_');
  print(s1);
  myscreen.move(4,0).set('#');
  print(myscreen);
  Screen myScreen(5, 3);
  const Screen blank(5, 3);
  myScreen.set('#').display(std::cout);// calls non const version.
  blank.display(std::cout); // calls const version.
  Screen::pos ht = 24, wd = 80;
  Screen scr(ht, wd, ' ');
  Screen *p = &scr;
  char c = scr.get(); // fetches the get member from the object scr.
  c = p -> get(); // use pointer .
  return 0;
}
