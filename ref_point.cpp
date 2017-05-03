#include <iostream>

using namespace std;

void fun(int * &a1,int* a2)
{
  a1

}

int main()
{
	 int  a=4,b=1;
     int  & ref=a;//declared and init
	 int  *p1 =&a,*p2=&b;
	 fun(p1,p2);
	 cout<<"a="<<a<<" b="<<b<<endl;

	 



}

