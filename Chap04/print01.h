#ifndef print01_HEADER
#define print01_HEADER

/**
 * File    : print01.h
 * Author  : Kazune Takahashi
 * Created : 8/1/2019, 11:07:00 PM
 * Powered by Visual Studio Code
 */

#include <iostream>

void print() {}

template <typename T, typename... Types>
void print(T first, Types... args)
{
  std::cout << first << std::endl;
  std::cout << "sizeof(" << first << ") = " << sizeof(first) << std::endl;
  std::cout << "sizeof...(args) = " << sizeof...(args) << std::endl;
  print(args...);
}

#endif // print01_HEADER