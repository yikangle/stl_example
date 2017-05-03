#include <iostream>

using namespace std;
/*
template <>
void fun1<int>(int a,int b)
{
 cout<<"fun1"<<endl;
}

template <> int compare<const char *>(const char * const &v1, const char * const &v2)  
{  
	  return strcmp(v1, v2);  
}  
*/
template <class T>
void fun2(T*a,T*b)
{
  cout<<"fun2"<<endl;

}

template < class T,class F>
void fun3(T*a,F*b)
{

cout<<"fun3"<<endl;

}

template < class T>
void fun3(T*a)
{

  cout<<"fun3_1"<<endl;

}

//is error 
/*template < class T,class a>
void fun3(T*a)
{

	cout<<"fun3_1"<<endl;

}
*/

template < class T,class F>
void fun3(T*a)
{

  cout<<"fun3_2"<<endl;

  
}



template <class T>
class c1
{

  

};



template<typename T1, typename T2>  //yi ban hua
class Test  
{  
	public:  
		    Test(T1 i,T2 j):a(i),b(j){cout<<"模板类"<<endl;}  
			Test(){cout<<"test1"<<endl;}
	private:  
			    T1 a;  
				    T2 b;  
};  
  
template<>  
class Test<int , char>  
{  
	public:  
		    Test(int i, char j):a(i),b(j){cout<<"全特化"<<endl;}  
			Test(){cout<<"test2"<<endl;}
	private:  
			    int a;  
				    char b;  
};  
  
template <typename T2>  
class Test<char, T2>  
{  
	public:  
		    Test(char i, T2 j):a(i),b(j){cout<<"偏特化1"<<endl;}  
			Test(){cout<<"test3"<<endl;}
	private:  
			    char a;  
				    T2 b;  
};  

template <typename T2>
class Test<T2*, T2*>
   { 
     public:
             Test(char i, T2 j):a(i),b(j){cout<<"偏特化2"<<endl;}
			 Test(){cout<<"test4"<<endl;}
     private:
			 char a;
			 T2 b;
    };



template <typename T2>
class Test<T2*, T2>
 { 
	  public:
              Test(T2* i, T2 j):a(i),b(j){cout<<"偏特化3"<<" a="<<a<<endl;}
			  Test(){cout<<"default constructor"<<endl;}
			void   operator ()(int a){cout<<"a="<<a<<endl;}
	  public:
	           char b;
               T2* a;
			 static const  int c=1;
 };

/*template <typename T2>
class Test<const T2*,T2>
{

     public:
		     Test(T2* i, T2 j):a(i),b(j){cout<<"偏特化4"<<" a="<<a<<endl;}
			 Test(){cout<<"default constructor"<<endl;}
			 void   operator ()(int a){cout<<"a="<<a<<endl;}
     public:
			 char b;
			 T2*a;
			 static const int c=1;

};*/


/*template <typename T2,typename F2>
class Test
{ 
	 public:
          //Test(T2* i, T2 j):a(i),b(j){cout<<"偏特化3"<<" a="<<a<<endl;}
          Test(){cout<<"default constructor"<<endl;}
     private:
            char b;
           T2* a;
 };
*/




int main()
{
  char *a="yi",b=4;
  int c=7,d=8,*e=NULL,*f=NULL;
  Test<char*,char*> test1();//why no output
  Test<char*,char*> test4();
  Test<char*,char> test2(a,b);
  Test<char*,char> test3;
  //Test<const char*,char>  test4; //why error is  redeclared
  cout<<"test2.b= "<< test2.b<<endl;
  test2(b);
  fun3<int,char>(&c,a);
  fun3<int>(&c);
  fun3<int,char>(&c);
  






}
