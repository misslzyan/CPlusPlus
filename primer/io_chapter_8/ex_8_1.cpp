#include <iostream>
using namespace std;

istream& read_and_print(istream &is) {
  int word;
  while (is >> word) {
    cout << word <<  " ";
  } 
  is.clear();
  return is;
}

int main () {
  istream& ii = read_and_print(cin);
  string a;
  ii >> a;
  cout << "come here" << endl;
  cout << a << endl;
}
