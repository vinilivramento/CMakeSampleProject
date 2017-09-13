#ifndef LIBRARY1_HPP
#define LIBRARY1_HPP

#include <iostream>
#include <lib/library2/include/library2.hpp>

namespace mylibrary
{

class Library1
{
  const Library2 lib2;
  public:
    Library1();
};

}

#endif
