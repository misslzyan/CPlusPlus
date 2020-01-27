#include <iostream>
#include <string>
using namespace std;

/* return pointer point to array.*/
int (*init())[10] {
 static int a[10] = {0};
  for (auto c : a) {
    cout << c << " ";
  }
  cout << endl;
  int (*p)[10];
  p = &a;
  return p;
}

/* return pointer point to array.*/
int (*init1())[10] {
  static int a[10];
  return &a;
}

int main () {
 for(auto c :  *(init())) {
   cout << c << " ";
 }
 cout << endl;
  init1();
}
