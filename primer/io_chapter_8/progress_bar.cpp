#include <thread>
#include <chrono>
#include <iostream>
using namespace std;
int main () {
  cout<<unitbuf;
  cout.width(3);
  for ( int i = 0; i <= 100 ; i++) {
    cout << i << "%";
    std::this_thread::sleep_for(std::chrono::milliseconds(20));
    if(i<100) 
    cout << "\b\b\b";
  }
  cout << "\n";
}
