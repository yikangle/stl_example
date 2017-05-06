#include <iostream>
#include "defalloc.h"
#include <string.h>

//using namespace std;
using namespace  myname;

int  main()
{
   allocator<int> allo;
   int *p=allo.allocate(1);
   memset(p,0,4);
   *p=4;
   std::cout<<"value "<<*p<<std::endl;

}
