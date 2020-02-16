#include <vector>
#include <iostream>
#include <numeric>
int main () {
  std::vector<int> vec = {0, 1, 2, 3, 4 ,5 ,6 ,7 ,8, 9};
  auto pos1 = std::find(vec.cbegin(), vec.cend(), 1);
  std::cout << "pos1 denotes value is :" << *pos1 << "\n";
  int a[] = {0, 1, 2, 3, 4 ,5 ,6};
  auto pos2 = std::find(std::begin(a), std::end(a), 3);
  std::cout << "pos2 denotes value is :" << *pos2 << "\n";
  auto sum = accumulate(vec.begin(), vec.end(), 0);
  std::cout << "sum is :" << sum << "\n";
  std::vector<std::string> strs = {"hello", "world", "||"};
  auto cats = accumulate(strs.begin(), strs.end(), std::string(""));
  std::cout << "cats is :" << cats << "\n";
  std::vector<int> v1 = {1, 2};
  std::vector<int> v2 = {1, 2};
  auto eq = equal(v1.cbegin(), v1.cend(), v2.cbegin());
  std::cout << "equal is :" << eq << "\n";
}
