#include "include/template.h"
using namespace std;
int main () {
  cout << dwd::compare(2, 1) << endl;
  cout << dwd::compare("aa", "bb") << endl;
  cout << dwd::compare_string("aa", "bb") << endl;
  cout << dwd::min(2, 1) << endl;
  cout << dwd::min(4, 5) << endl;
  return 0;
}
