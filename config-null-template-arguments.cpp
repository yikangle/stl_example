#include <iostream>
#include <cstddef>

using  namespace std;

class alloc{

};

template <class T,class Alloc = alloc, size_t bufsize = 0>
class deque{

  public:
	  deque()  {cout << "deque"<<endl; }
    void   print(void)  {cout << "this is deque print"<<endl; }
};


template <class T, class Sequence>
class stack;


template <class T , class Sequence>
bool operator == ( stack<T,Sequence>&x,stack<T,Sequence>&y);


template <class T,class Sequence>
bool operator < (const stack<T,Sequence>&x,const stack<T,Sequence>&y);

template <class T,class Sequence = deque<T> >
class stack{

  friend bool operator == <T> (stack<T>&, stack<T>&);
  friend bool operator < <T> (const stack<T>&,const stack<T>&); 
  
//  friend bool operator == <T> (const stack&,const stack&); 
//  friend bool operator <  <T> (const stack&,const stack&);
 
//  friend bool operator <  <> (const stack&,const stack&);
//  friend bool operator <  <> (const stack&,const stack&);
  
  //friend bool operator ==   (const stack&,const stack&);
  //friend bool operator <    (const stack&,const stack&);

 public:
  stack(stack&) { cout<< "stack copy-structor"<<endl;}
  stack() { cout<< "stack"<< endl; }
  void print(void) { cout<< "this is stack print"<<endl;}
 private:
  Sequence c;
};

template <class T,class Sequence>
bool operator == (stack<T,Sequence>& x,stack<T,Sequence>& y){
 x.c.print();
 return cout<<"operator=="<<'\t';
  
}

template <class T,class Sequence>
bool operator < (const stack<T,Sequence>&x,const stack<T,Sequence>&y){
   // stack<T,Sequence> f=x;  //const  x  as right value is still error
	return cout<<"operator <"<< '\t';

}

int main()
{

	 stack<int> x;
     stack<int> y;
	

	 cout << (x==y)<<endl;
	 cout << (x<y)<<endl;
	 
	 stack<char> y1;
	 //cout<< (x==y1) << endl; //error
	 //cout<< (x<y1) << endl; // error
}


