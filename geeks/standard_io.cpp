#include <iostream>
using namespace std;
int main() {
  char geek[] = "GeeksForGeeks";
  cout << geek << "- A computer science portal for geeks";
  cout << endl; 
  int age;
  cout << "Input your age:";
  cin >> age;
  cout << "Your age is " << age << endl;
  // cerr is not buffered.
  cerr << "An error occured!" << endl;
  // clog is buffered.
  clog << "An buffered error occured!" << endl;
  return 0;
}
