#include <iostream>
#include <string>
using namespace std;
int main () {
  string nums[] = {"one", "two", "three"};
  string *p = &nums[0];
  string *p2 = nums;
  for (auto c : nums) {
    cout << c << " ";
  }
  cout << endl;
  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto a2(ia);
  decltype(ia) ia3 = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int *e = &ia3[10];
  for (int *b = ia3; b != e; b++) {
    cout << *b << " ";
  }  
  cout << endl;
  return 0;
}
