#include <iostream>
#include <string>
using namespace std;
int main () {
  string str("Hello World!!!");
  for(auto &c : str) {
    c = toupper(c);
  }
  cout << str << endl;
  string s("some string");
  if(!s.empty())
    cout << s[0] << endl;
  if(!s.empty()){
    s[0] = toupper(s[0]);
  }
  cout << s << endl;
  for(decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]);index++){
    s[index] = toupper(s[index]);
  }
  cout << s << endl;
  return 0;
}
