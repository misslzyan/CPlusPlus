#include <iostream>
using namespace std;

int fact() {
  unsigned r;
  cout << "Input a num:" ;
  cin >> r;
  int ret = 1;
  while (r > 1) {
    ret *= r--;
  }
  return ret;
}

int main () {
  int j = fact();
  cout << j << endl;
  return 0;
}
