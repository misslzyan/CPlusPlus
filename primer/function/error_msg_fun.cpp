#include <iostream>
#include <string>
using namespace std;

void error_msg(initializer_list<string> il) {
  for (auto beg = il.begin(); beg != il.end(); ++beg) {
    cout << *beg << " ";
  }
  cout << endl;
}

void error_msg1(initializer_list<string> il) {
  for (auto s : il) {
    cout << s << " ";
  }
  cout << endl;
}
int main () {
  error_msg({"a", "b", "c"});
  error_msg1({"a", "b", "c"});
}
