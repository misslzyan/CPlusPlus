#include <iostream>
#include "Person.h"
using std::cout;
using std::endl;
int main () {
  Person s;
  s.setName("lucy").setAddress("some adress");
  cout << s.getName() << " " << s.getAddress() << endl;
  std::string to = toString(s);
  cout << to << endl;
  Person s2;
  s2.setName("lily").setAddress("some city");
  Person s3 = add(s, s2);
  cout << toString(s3) << endl;
  Person p1;
  cout << toString(p1) << endl;
  Person p2(std::cin);
  cout << toString(p2) << endl;
  Person p3 = p2;
  cout << toString(p3) << endl;

  return 0;
}
