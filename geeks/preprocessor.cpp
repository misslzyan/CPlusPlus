#include <iostream>
using namespace std;
#define LIMIT 5

// define area
#define AREA(a, b) ((a) * (b))
int main(){
  for(int i=0;i<LIMIT;i++){
    cout << i << "\n";
  }
  int a = 10, b = 11, area;
  area = AREA(a, b);
  cout << "area is : " << area << endl; 
  return 0;
}
