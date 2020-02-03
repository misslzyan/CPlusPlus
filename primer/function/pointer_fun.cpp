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

auto init2() -> int(*)[10] {
  static int a[10] = {0};
  return &a;
}

typedef int arrT[10];
using arrtT = int[10];
arrtT* func(int i) {
  static int a[10] = {0};
  return &a;
}

int main () {
 for(auto c :  *(init())) {
   cout << c << " ";
 }
 cout << endl;
 init1();
 for (auto c : *init2()) {
   cout << c << " ";
 }
 cout << endl;
 for (auto c : *func(1)) {
   cout << c << " ";
 }
 cout << endl;
}
