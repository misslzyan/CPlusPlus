#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
  vector<unsigned> scores(11, 0);
  unsigned grade;
  vector<int> v;
//  cout << v[0] << endl;
  while (cin >> grade) {
    if (grade <= 100) {
      scores[grade/10]++;
    }
  }
  for (auto score : scores) {
    cout << score << " ";
  }
  cout << endl;
  return 0;
}
