#include <iostream>
using namespace std;
int main () {
  auto old_state = cin.rdstate();
  cin.clear();
  int i;
  cin >> i;
  cout << i << endl;
  cout << old_state << "\n";
  cout << cin.rdstate() << "\n";
  cin.setstate(old_state); 
  while(cin>>i){
    cout << i << endl;
  }
}
