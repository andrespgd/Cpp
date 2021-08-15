#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char * argv[]) {

	// Convert integer to string
	int anIntVal = 88;
	string myString1 = boost::lexical_cast<string>(anIntVal);

	// Split string into a vector/list
	string line = "AA/BB-CC___DD";
	vector<string> strs;
	boost::split(strs, line, boost::is_any_of("/-_"));
	for (auto s : strs){
		cout << s << endl;
	}
	cout << endl;
	// tokens now holds 4 items: AA BB CC   DD

	// easy format
	cout << boost::format{"%3%_%1%_%2%"} % 12 % 5 % 2014 << '\n';

	return 0;
}
