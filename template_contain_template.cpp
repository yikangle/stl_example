#include<iostream>

using namespace std;

class alloc
{

};


template <class T,class  Alloc=alloc>
class vector{
   public:
	      typedef T value_type;
		  typedef value_type * iterator;
        template <class F>
   		void insert(iterator it ,F first,F last)
		     {
			   
		       cout<<"insert"<<*first<<"last="<<*last<<endl;
		  
		     }

};

int main()
{  
   int a[5] = {0,1,2,3,4};
   vector<int> v;
   vector<int>::iterator  it;
   v.insert(it,a,a+4);
  

}
