#include <iostream>
#include <string>
using namespace std;
int main(){
  string result;
  const string hexdigits="0123456789ABCDEF";
  decltype(result.size()) hex;
  while(cin >> hex) {
    if(hex <16){
      result += hexdigits[hex];
    } else {
      cout << hex << endl;
    }
  }
  cout << result << endl;
  return 0;
}
