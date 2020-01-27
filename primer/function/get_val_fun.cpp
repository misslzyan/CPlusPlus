#include <iostream>
#include <string>
using namespace std;
char &get_val(string &str, string::size_type ix) {
  return str[ix];
}

int main () {
  string str("something");
  cout << str << endl;
  get_val(str, 0) = 'A';
  cout << str << endl;
  return 0;
}
