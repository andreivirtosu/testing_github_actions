#include "A.h"
#include <iostream>

namespace {

    class XX {
      public:
        XX(){}
    };

}

void A::test_func(int arg)
{
  if(arg==42){
    std::cout<<"got it.";
  }

}
