#include <boost/algorithm/string.hpp>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

const int rows = 10;
const int cols = 20;

vector<vector<float> > vec2d(rows, vector<float> (cols, 7.0));


int main(int argc, char *argv[]) {

	// write 2D vector to screen
	for (int i=0; i < (int)vec2d.size(); i++){
		for (int j=0; j < (int)vec2d[i].size(); j++){
			cout << i << " " << j << " " << fixed << setprecision(8) << vec2d[i][j]  << "\n";
		}
	}

    // create filename
	string line(argv[0]);
	vector<string> strs;
	boost::split(strs,line,boost::is_any_of("/"));
	string fname = strs.back() + ".csv";

	// write CSV
	ofstream output_file (fname);
	for (int row=0; row<(int)vec2d.size(); row++){
		for (int col=0; col<(int)vec2d[row].size(); col++){
			output_file << fixed << setprecision(8) << vec2d[row][col]  << ",";
		}
		output_file << "\n";
	}
	output_file.close();

  return 0;
}
