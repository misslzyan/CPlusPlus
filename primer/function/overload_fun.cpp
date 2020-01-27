#include <iostream>
using namespace std;

void print (const char *cp) {
  while (*cp) {
    cout << *cp;
    cp++;
  }
  cout << endl;
}

void print(const int *beg, const int *end) {
  while (beg != end) {
    cout << *beg << " ";
    beg++;
  }
  cout << endl;
}

void print(const int ia[], size_t size) {
  for (size_t i = 0; i != size; i++) {
    cout << ia[i] << " ";
  }
  cout << endl;
}

int main () {
  int j[2] = {1, 0};
  print("Hello World");
  print(j, end(j) - begin(j));
  print(begin(j), end(j));
}
