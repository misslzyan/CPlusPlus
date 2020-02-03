#include <iostream>
#include <string>
using namespace std;
int main () {
  unsigned cnt = 42;
  int arr[10];
  constexpr unsigned sz = 42;
  int *parr[sz];
  const unsigned sz1 = 3;
  int ia1[sz1] = {0, 1, 2};
  int a2[] = {0, 1, 2};
  int a3[5] = {0, 1, 2};//{0, 1, 2, 0, 0}
  string a4[3] {"hi", "bye"};
// error   int a5[2] = {0, 1, 2};
// error  string bad[cnt];
  char c1[] = {'C', '+', '+'};
  char c2[] = {'C', '+', '+', '\0'};
  char c3[] = "C++";
//  const char c4[6] = "Daniel";
  int *ptrs[10];
// error   int &refs[10] = 
  int (*Parray)[10] = &arr;
  int (&arrRef)[10] = arr;
  int aa1[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };
  int aaa1[10][20][30];
}
