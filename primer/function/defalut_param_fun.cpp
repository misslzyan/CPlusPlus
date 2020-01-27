#include <iostream>
#include <string>
using namespace std;

typedef string::size_type sz;
/*generate string with three parameters*/
string screen (sz ht = 24, sz wid = 80, char backgrnd = '*') {
  string res;
  for (sz i = 0; i != ht; i++) {
    for (sz j = 0; j != wid; j++) {
      res += backgrnd;
    }
    res += '\n';
  }
  return res;
}
int main () {
  string window;
  window = screen();
  cout << window << endl;
  window = screen(2, 2, '=');
  cout << window << endl;
}
