#include <iostream>
class Point {
public:
  Point();
  Point(const Point &);
  Point& operator= (const Point &p) {
    this -> x = p.x;
    this -> y = p.y;
    std::cout << "operator =" << std::endl;
    return *this;
  }

  double x;
  double y;
};

Point::Point():x(0.0),y(0.0){}

Point::Point(const Point &p) {
  this -> x = p.x;
  this -> y = p.y;
  std::cout << "copy control!" << std::endl;
}

Point global;

Point foo_bar(Point arg) { //copy control
  Point local = arg, *heap = new Point(global); // two copy
  *heap = local;  // operator = is used.    and  no copy
  Point p;
  std::cout << p.x << " " << p.y << std::endl;
  
  p = local;
  local.x=1.0;
  local.y=2.0;
  std::cout << local.x << " " << local.y << std::endl;
  std::cout << p.x << " " << p.y << std::endl;
  Point pa[4] = {local, *heap}; // two copy
  return *heap; // one copy
}


int main () {
  Point p;
  Point t = foo_bar(p);
//  Point p1 = p;
//  Point *heap = new Point(global);
}
