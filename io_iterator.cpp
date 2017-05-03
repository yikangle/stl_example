#include <iostream>
#include <iterator>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::ostream_iterator;
using std::istream_iterator;
using std::vector;

struct Meeting {
	enum Day_Of_Week
	{MO, TU, WE, TH, FR, SA, SU};
	static Day_Of_Week
		day_of_week (char c);
	Meeting (const std::string &title,
			Day_Of_Week day,
			size_t start_time,
			size_t finish_time);
	Meeting (const Meeting & m);
	Meeting (char **argv);
	Meeting &operator =
		(const Meeting &m);
	bool operator <
		(const Meeting &m) const;
	bool operator ==
		(const Meeting &m) const;
	std::string title_;
	// Title of the meeting
	Day_Of_Week day_;
	// Week day of meeting
	size_t start_time_;
	// Meeting start time in HHMM format
	size_t finish_time_;
	// Meeting finish time in HHMM format
};

int main()
{
	const int maxlen=3;
	int i=0;
	vector<int> vi(maxlen);
	ostream_iterator<int> outp(cout);
	cout<<"Enter "<<maxlen<<" integers:"<<endl;
	istream_iterator<int> inp(cin), eos;
	do{
		vi.at(i)=*inp;
	}while(++i<maxlen && inp++ != eos);
	for(i=0; i< maxlen; ++i, ++outp)
	{
		*outp=vi.at(i);
		cout<<" ";
	}
}
