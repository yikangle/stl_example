#include<iostream>

using namespace std;

class alloc{

};


template<class T,class Alloc=alloc,size_t size=0>
class  deque
{
  public:
	  deque(){cout<<"deque "<<"size= "<<size<<endl;}




};


template<class T,class sequence=deque<T> >
class stack{
  public:
       stack(){cout<<"stack"<<endl;}
  private:
	  sequence c;//default construct

};


int main()
{

  stack<int> s;

}
