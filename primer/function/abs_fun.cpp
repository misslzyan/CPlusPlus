#include <iostream>
using namespace std;

int abs(int a) {
  return a < 0 ? -a : a;
}

int main () {
  int a = -1;
  cout << abs(a) << endl;
  return 0;
}
