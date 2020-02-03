#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
  vector<int> v1;
  vector<int> v2 = v1;
  vector<int> v3(v2);
  vector<string> v4={"1","2","2"};
  vector<string> v5{"1","2","3","4"};
  vector<int> v6(5);
  vector<int> v7(5,1);
  for(auto c : v7){
    cout << c << " ";
  }
  cout << endl;
  return 0;
}
