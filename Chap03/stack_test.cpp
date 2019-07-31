/**
 * File    : stack_test.cpp
 * Author  : Kazune Takahashi
 * Created : 7/31/2019, 10:18:35 PM
 * Powered by Visual Studio Code
 */

#include "stack.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename Container>
void print(Container v)
{
  cout << "{ ";
  for (auto x : v)
  {
    cout << x << ", ";
  }
  cout << "}" << endl;
}

template <int Val, typename T>
T add_value(T x)
{
  return x + Val;
}

int main()
{
  Stack<int, 20u> S;
  Stack<string, 40> T;
  auto size_S = S.size();
  auto size_T = T.size();
  if (!std::is_same_v<decltype(size_S), decltype(size_T)>)
  {
    cout << "Size types differ." << endl;
  }
  vector<int> V = {1, 3, 5, 10};
  vector<int> W;
  std::transform(V.begin(), V.end(), std::back_inserter(W), add_value<5, int>);
  print(V);
  print(W);
}