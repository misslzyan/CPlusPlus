#include "include/template.h"
using namespace std;
int main () {
  cout << dwd::compare(2, 1) << endl;
  cout << dwd::compare("aa", "bb") << endl;
  cout << dwd::compare_string("aa", "bb") << endl;
  cout << dwd::min(2, 1) << endl;
  cout << dwd::min(4, 5) << endl;
  int x = 1, y = 2;
  dwd::swap(x, y);
  std::cout << x << " " << y << std::endl;
  vector<int> list = {1, 2, 3, 4, 5};
  dwd::printList(list, 5);
  std::string s = dwd::intToString(1);
  std::cout << s << std::endl;
  return 0;
}
