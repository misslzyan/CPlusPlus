#include<iostream>
#include<stack>
class MinStack {
public:
  std::stack<int> x_stack;
  std::stack<int> min_stack;
  MinStack() {
    min_stack.push(INT_MAX);
  }
 
  void push(int x) {
    x_stack.push(x);
    min_stack.push(std::min(x, min_stack.top()));
  }

  void pop() {
    x_stack.pop();
    min_stack.pop();
  }

  int top() {
    return x_stack.top();
  }

  int getMin() {
    return min_stack.top();
  }
};

int main() {
  MinStack s;
  s.push(1);
  s.push(2);
  std::cout << s.getMin() << std::endl;
}
