#include "A.h"
#include <iostream>

#defin __FF__ 33

void A::test_func(int arg)
{
  double x = 42;
  float xx = (float)x;
  if(xx==42.0){
    std::cout<<"got it.";
  }

}
