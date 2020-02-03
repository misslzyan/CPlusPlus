#include <iostream>
using namespace std;
class Sales_data {
private:
  double avg_price() const
    { return units_sold ? revenue/units_sold : 0;}
  std::string bookNo = "bookNO";
  unsigned units_sold = 0;
  double revenue = 0.0;
public:
  string isbn();
  Sales_data &isbn(const string &);
};

string Sales_data::isbn() {
  return bookNo;
}

Sales_data& Sales_data::isbn(const string &b) {
  this -> bookNo = b;
  return *this;
}


int main () {
  Sales_data item;
  cout << item.isbn() << endl;
  cout << item.isbn("aaaa").isbn() << endl;
}
