#include <iostream>
#include <string>
using namespace std;
int main() {
  string s("some string");
  for (auto &c : s) {
    c = 'x';
  }
  cout << s << endl;
  for (char &c : s) {
    c = 'a';
  }
  cout << s << endl;
  string str("hello world!!!");
  string str2;
  for (auto &c : str) {
    if (!ispunct(c)) {
      str2 += c;
    }
  }
  cout << str2 << endl;
  const string str3("hello");
  for (const auto &c : str3){
    cout << c << endl;
  }
  cout << str3 << endl;
  return 0;
}
