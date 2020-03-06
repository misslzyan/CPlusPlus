#include <iostream>
#include <string>

/**
 * fcn调用destructor的次数
 */

class Sales_data {
public:
  std::string isbn();
  Sales_data(){}
  ~Sales_data(){
    std::cout << "destructor" << std::endl;
  }
private:
  std::string isbn_str;
};

std::string Sales_data::isbn() {
   return this -> isbn_str;
}

bool fcn(const Sales_data *trans, Sales_data accum) {
  Sales_data item1(*trans), item2(accum);
  return item1.isbn() != item2.isbn();
}


int main () {
  Sales_data *trans = new Sales_data();
  Sales_data accum;
  fcn(trans, accum);
  std::cout << "deadline===" << std::endl;
}
