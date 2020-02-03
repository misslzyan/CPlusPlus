#include <iostream>
#include <string>
#include "Screen.h"
using namespace std;

int main () {
  Screen myscreen;
  char ch = myscreen.get();
  cout << "ch:" << ch << endl;
  ch = myscreen.get(0, 0);
  cout << "ch:" << ch << endl;
  return 0;
}
