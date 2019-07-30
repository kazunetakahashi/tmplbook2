/**
 * File    : stack_test.cpp
 * Author  : Kazune Takahashi
 * Created : 2019/7/30 17:37:09
 * Powered by Visual Studio Code
 */

#include "stack.h"
#include <iostream>
#include <deque>

using std::cout;
using std::endl;

int main()
{
  Stack<int> intStack;
  Stack<double, std::deque<double>> dblStack;

  intStack.push(7);
  cout << intStack.top() << endl;
  intStack.pop();

  dblStack.push(42.42);
  cout << dblStack.top() << endl;
  dblStack.pop();
}