#include <vector>
typedef int lmnt;
using std::vector;
typedef vector<lmnt> Vector;
#include <deque>
using std::deque;
typedef deque<lmnt> Deque;
#include <list>
using std::list;
typedef list<lmnt> List;
#include <iostream>
#include <iterator>
using std::cout;
using std::cin;
using std::endl;
using std::ostream_iterator;
#include <algorithm>
// function object class
class Print
{
	public:
		template<class T>
			void operator()(const T& printable) const
			{ cout << printable << endl; }
			
};
int main()
{
	const int maxlen = 3;
	lmnt temp;
	Vector container1;
	Deque container2;
	List container3(2*maxlen); // needs to define size in
	// advance since we use merge
	// Initialize Vector
	cout<<"Enter "<<maxlen<<" elements: ";
	for(int i=0; i < maxlen ; ++i)
	{
		cin>>temp;
		container1.push_back(temp);
	}
	// sort Vector
	Vector::iterator vstart=container1.begin();
	Vector::iterator vend=container1.end();
	sort(vstart, vend) ;
	// Initialize Deque
	cout<<"Enter "<<maxlen<<" more elements: ";
	for(int i = 0; i < maxlen; i++)
	{
		cin>>temp;
		container2.push_front(temp);
	}
	// sort Deque
	Deque::iterator dstart=container2.begin();
	Deque::iterator dend=container2.end();
	sort(dstart, dend) ;
	// merge the elements of Vector and Deque
	// and place the results in List
	merge(vstart,vend,dstart,dend,container3.begin()) ;
	cout << "\nSorted elements:" << endl ;
	for_each(container3.begin(), container3.end(), Print());
	reverse(container3.begin(), container3.end());
	cout << "\nAfter reversing:" << endl ;
	for_each(container3.begin(),container3.end(),Print());
	cout<<"Enter element to search: "<<endl;
	cin>>temp;
	List::iterator it=find(container3.begin(),container3.end(),temp);
	ostream_iterator<lmnt> os(cout, " ");
	copy(it,container3.end(),os); // output elements to cout
	cout<<endl;
	Print a;
	a((int)4);
}
