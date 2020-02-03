#include <iostream>
#include <string>
using namespace std;
int main () {
  string s1 = "a string";
  auto n = s1.size();
  string *p = &s1;
  auto m = (*p).size();
  auto z = p -> size();
  cout << n << " " << m << " " << z << endl;
  return 0;
}
