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
	string line1("test1\ttest2\ttest3");
	vector<string> strs1;
	boost::split(strs1, line1, boost::is_any_of("\t"));
	cout << "size of the vector= " << strs1.size() << endl;
	for (size_t i = 0; i < strs1.size(); i++){
	    cout << strs1[i] << endl;
	}
	cout << endl;

	// Split string into a vector/list
	string line2 = "AA/BB-CC___DD";
	vector<string> strs2;
	boost::split(strs2, line2, boost::is_any_of("/-_"));
	for (auto s : strs2){
		cout << s << endl;
	}
	cout << endl;
	// tokens now holds 4 items: AA BB CC   DD

	// easy format
	boost::format fmt_str = boost::format("Luke %1% and Han %2%.") % "Skywalker" % "Solo";
	cout << fmt_str << endl << endl;

	// easy format
	cout << boost::format{"%3%_%1%_%2%"} % 12 % 5 % 2014 << '\n';


	return 0;
}



