#ifndef stack_HEADER
#define stack_HEADER

/**
 * File    : stack.h
 * Author  : Kazune Takahashi
 * Created : 7/31/2019, 9:16:25 PM
 * Powered by Visual Studio Code
 */

#include <array>
#include <cassert>

template <typename T, auto Maxsize>
class Stack
{
public:
  using size_type = decltype(Maxsize);

private:
  std::array<T, Maxsize> elems;
  size_type num;

public:
  Stack();
  void push(T const &elem);
  void pop();
  T const &top() const;
  bool empty() const { return num == 0; }
  size_type size() const { return num; }
};

template <typename T, auto Maxsize>
Stack<T, Maxsize>::Stack() : num{0} {}

template <typename T, auto Maxsize>
void Stack<T, Maxsize>::push(T const &elem)
{
  assert(num < Maxsize);
  elems[num++] = elem;
}

template <typename T, auto Maxsize>
void Stack<T, Maxsize>::pop()
{
  assert(!empty());
  --num;
}

template <typename T, auto Maxsize>
T const &Stack<T, Maxsize>::top() const
{
  assert(!empty());
  return elems[num - 1];
}

#endif // stack_HEADER