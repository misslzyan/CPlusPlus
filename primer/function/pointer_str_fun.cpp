#include <iostream>
#include <string>
using namespace std;

string (*init(const string &sl))[10] {
  static string s[10];
  for (auto &c : s) {
    c = 'a';
  }
  for (string::size_type i = 0; i != sl.size(); i++) {
    s[i] = sl[i];
  }
  return &s;
}

int main () {
  string s("something");
  for (auto c : *init(s)) {
    cout << c << " ";
  }
  cout << endl;
  return 0;
}
