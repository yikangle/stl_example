 #include<iostream>

using namespace std;

template <typename T>
class testclass
{
   public:
	   static const int a = 1;
   //static int  b = 2;//error
     static int b ;  
};

//testclass<T>::b=3;

template<> int  testclass<int>::b = 3;//need attention


int main()
{
//    int testclass<int>::b = 3;   
	cout<<"a= "<< testclass<int>::a<<endl;
	cout<<"b= "<< testclass<int>::b<<endl;
}
