#ifndef stack_HEADER
#define stack_HEADER

/**
 * File    : stack.h
 * Author  : Kazune Takahashi
 * Created : 2019/7/30 14:05:53
 * Powered by Visual Studio Code
 */

#include <vector>
#include <cassert>

template <typename T, typename Cont = std::vector<T>>
class Stack
{
private:
  Cont elems;

public:
  Stack() = default;
  Stack (T const& elem) : elems({std::move(elem)}) {}

  void push(T const &elem);
  void pop();
  T const &top() const;
  bool empty() const { return elems.empty(); }
};

template <typename T, typename Cont>
void Stack<T, Cont>::push(T const &elem)
{
  elems.push_back(elem);
}

template <typename T, typename Cont>
void Stack<T, Cont>::pop()
{
  assert(!elems.empty());
  elems.pop_back();
}

template <typename T, typename Cont>
T const &Stack<T, Cont>::top() const
{
  assert(!elems.empty());
  return elems.back();
}

#endif // stack_HEADER