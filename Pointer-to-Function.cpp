#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
#include <string.h>
int main () {
	std::vector<char *> v;
	v.push_back ("One"); v.push_back ("Two"); v.push_back ("Three"); v.push_back ("Four");
	std::cout << "Sequence contains:";
	std::copy (v.begin (), v.end (), std::ostream_iterator<char *> (std::cout, " "));
	std::cout << std::endl << "Searching for Three.\n";
	std::vector<char *>::iterator it = std::find_if (v.begin (), v.end (),
			std::not1 (std::bind2nd (std::ptr_fun (strcmp), "Three")));
	if (it != v.end ()) {
		std::cout << "Found it! Here is the rest of the story:";
		std::copy (it, v.end (), std::ostream_iterator<char *> (std::cout, "\n"));
	}
	return 0;
}
