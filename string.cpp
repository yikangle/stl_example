#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;

class string1 {

friend iostream & operator << (iostream & cout,string1 s1);
friend iostream & operator >> (iostream & cin, string1 s2);

	public :
             int getsize(void){return strlen(s);}
			 string1(char* s1);
			 string1(string1 &);
			 ~string1();
             string1 & operator +(string1 & s3);
			 string1 & operator ==(string1 & s4);
			 string1 & operator =(string1 & s5);

    private:
  
    char *s;

};


string1::string1(char*s1)
{
   s=(char*)malloc(strlen(s1)+1);
   strcpy(s,s1);
   
}


string1::~string1()
{
	free(s);
}

string1::string1(string1 &s1)
{

	s=(char*)malloc(strlen(s1.s)+1);
    strcpy(s,s1.s);
}

string1 & string1::operator +(string1 &s3)
{

   char*a=(char*)malloc(strlen(s)+1);
   int len=strlen(s)+1;
   strcpy(a,s);
   free(s);
   s=(char*)malloc(len+strlen(s3.s));
   strcpy(s,a);
   strcat(s,s3.s);
   return *this;
}

string1 & operator = (string1 &s5)
{
	free(s);
   s=malloc(strlen(s5.s)+1);
   strcpy(s,s5.s);
   return *this;
}














int main()
{
}










