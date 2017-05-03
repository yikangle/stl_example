#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector
using namespace std;

void myfunction (int i) {  // function:
	  std::cout << ' ' << i;
}

struct myclass {           // function object type:
	  void operator() (int i) {std::cout << ' ' << i;}
} myobject;

struct print{
  print(){std::cout<<"construct print"<<endl;}

  void operator ()(int ){std::cout<<"funciton "<<endl;}
};

int main () 
{
   std::vector<int> myvector;
   myvector.push_back(10);
   myvector.push_back(20);
   myvector.push_back(30);

  std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), myfunction);
  std::cout << '\n';

    // or:
  std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), myobject);
  for_each (myvector.begin(),myvector.end(),print());
  return 0;
  std::cout << '\n';

   return 0;
}

