#include <iostream>
#include <string>
using namespace std;
int main () {
  string s("some string");
  if (s.begin() != s.end()) {
    auto b = s.begin();
    *b = toupper(*b);
  }
  cout << s << endl;
  string s1("some string");
  s = s1;
  for (auto it = s.begin(); it != s.end() && !isspace(*it); it++) {
    *it = toupper(*it);
  }
  cout << s << endl;
  return 0;
}
