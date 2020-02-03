#include <iostream>
using namespace std;

istream& read_and_print(istream &is) {
  string word;
  while (is >> word) {
    cout << word <<  " ";
  } 
  is.clear();
  return is;
}

int main () {
  istream& ii = read_and_print(cin);
  int a;
  ii >> a;
  cout << a << endl;
}
