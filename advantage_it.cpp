#include <iostream>
#include <iterator>
#include<vector>
#include<stdio.h>
using std::cout;
using std::cin;
using std::endl;
using std::ostream_iterator;
using std::istream_iterator;
using std::vector;
int main()
{
	const int maxlen=3;
	int i=0;
	vector<int> vi(maxlen);
	vector<int>::iterator it = vi.begin();
	ostream_iterator<int> outp(cout," ");
	istream_iterator<int> inp(cin), eos;
	cout<<"Enter "<<maxlen<<" integers:"<<endl;
	std::copy<istream_iterator<int>, vector<int>::iterator>(inp,eos,it);
	std::copy(vi.begin(),vi.end(),outp);
}


