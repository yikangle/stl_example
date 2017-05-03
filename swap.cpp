#include<iostream>
using namespace std;

class alloc{
	public:
          alloc(int c):a(c){cout<<"construct"<<endl;}

    private:
		  int a;
};


template <class T,class Alloc=alloc>
class vector
{

public:
void swap(vector<T,Alloc>&)
	  {
		 alloc a(1);
	     cout<<"swap()"<<endl;
	  }

};

int main()
{

  vector<int> x,y;
  x.swap(y);

}


